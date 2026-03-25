const DATA_PATH = "data/files.json";

const elements = {
    grid: document.getElementById("program-grid"),
    count: document.getElementById("file-count"),
    search: document.getElementById("search-input"),
    status: document.getElementById("status-message"),
    modal: document.getElementById("viewer-modal"),
    viewer: document.getElementById("viewer"),
    viewerTitle: document.getElementById("viewer-title"),
    viewerFeedback: document.getElementById("viewer-feedback"),
    downloadCodeLink: document.getElementById("download-code-link"),
    downloadBinaryLink: document.getElementById("download-binary-link"),
    copyButton: document.getElementById("copy-code-button"),
    closeModal: document.getElementById("close-modal")
};

let programs = [];
let activeCode = "";

document.addEventListener("DOMContentLoaded", init);

async function init() {
    bindEvents();

    try {
        const response = await fetch(DATA_PATH, { cache: "no-store" });
        if (!response.ok) {
            throw new Error(`Failed to load ${DATA_PATH} (${response.status})`);
        }

        programs = await response.json();
        renderPrograms(programs);
        updateStatus(programs.length === 1 ? "1 program available." : `${programs.length} programs available.`);
    } catch (error) {
        renderError(error);
    }
}

function bindEvents() {
    elements.search.addEventListener("input", handleSearch);
    elements.closeModal.addEventListener("click", closeModal);
    elements.copyButton.addEventListener("click", copyCodeToClipboard);
    elements.modal.addEventListener("click", event => {
        const target = event.target;
        if (target instanceof HTMLElement && target.dataset.closeModal === "true") {
            closeModal();
        }
    });

    document.addEventListener("keydown", event => {
        if (event.key === "Escape" && elements.modal.classList.contains("is-open")) {
            closeModal();
        }
    });
}

function handleSearch(event) {
    const query = event.target.value.trim().toLowerCase();
    const filteredPrograms = programs.filter(program => {
        return (
            program.name.toLowerCase().includes(query) ||
            program.description.toLowerCase().includes(query)
        );
    });

    renderPrograms(filteredPrograms);
    updateStatus(filteredPrograms.length === 1 ? "1 matching program." : `${filteredPrograms.length} matching programs.`);
}

function renderPrograms(items) {
    elements.grid.replaceChildren();
    elements.count.textContent = String(items.length);

    if (items.length === 0) {
        const emptyState = document.createElement("div");
        emptyState.className = "empty-state";
        emptyState.textContent = "No programs match the current search.";
        elements.grid.appendChild(emptyState);
        return;
    }

    items.forEach(program => {
        elements.grid.appendChild(createProgramCard(program));
    });
}

function createProgramCard(program) {
    const card = document.createElement("article");
    card.className = "program-card";

    const header = document.createElement("div");
    header.className = "program-card__header";

    const filename = document.createElement("p");
    filename.className = "program-card__filename";
    filename.textContent = `${program.name}.c`;

    const title = document.createElement("h2");
    title.className = "program-card__title";
    title.textContent = formatProgramName(program.name);

    const description = document.createElement("p");
    description.className = "program-card__description";
    description.textContent = program.description;

    header.append(filename, title, description);

    const actions = document.createElement("div");
    actions.className = "program-card__actions";

    const viewButton = document.createElement("button");
    viewButton.type = "button";
    viewButton.className = "button button--primary";
    viewButton.textContent = "View Code";
    viewButton.addEventListener("click", () => openViewer(program));

    const codeLink = document.createElement("a");
    codeLink.className = "button button--ghost";
    codeLink.href = program.code_file;
    codeLink.download = `${program.name}.c`;
    codeLink.textContent = "Download Code";

    const binaryLink = document.createElement("a");
    binaryLink.className = "button button--ghost";
    binaryLink.href = program.binary_file;
    binaryLink.download = `${program.name}.zip`;
    binaryLink.textContent = "Download Binary";

    actions.append(viewButton, codeLink, binaryLink);
    card.append(header, actions);

    return card;
}

async function openViewer(program) {
    elements.viewerTitle.textContent = `${formatProgramName(program.name)} Source`;
    elements.downloadCodeLink.href = program.code_file;
    elements.downloadCodeLink.download = `${program.name}.c`;
    elements.downloadBinaryLink.href = program.binary_file;
    elements.downloadBinaryLink.download = `${program.name}.zip`;
    elements.viewerFeedback.textContent = "Loading source file...";
    elements.viewer.textContent = "";
    activeCode = "";

    openModal();

    try {
        const response = await fetch(program.code_file, { cache: "no-store" });
        if (!response.ok) {
            throw new Error(`Failed to load ${program.code_file} (${response.status})`);
        }

        const code = await response.text();
        activeCode = code;
        elements.viewer.textContent = code;
        elements.viewerFeedback.textContent = `Loaded ${program.name}.c`;

        if (window.Prism) {
            Prism.highlightElement(elements.viewer);
        }
    } catch (error) {
        elements.viewer.textContent = "";
        elements.viewerFeedback.textContent = error.message;
    }
}

function openModal() {
    elements.modal.classList.add("is-open");
    elements.modal.setAttribute("aria-hidden", "false");
    document.body.style.overflow = "hidden";
}

function closeModal() {
    elements.modal.classList.remove("is-open");
    elements.modal.setAttribute("aria-hidden", "true");
    document.body.style.overflow = "";
    elements.viewerFeedback.textContent = "";
}

async function copyCodeToClipboard() {
    if (!activeCode) {
        elements.viewerFeedback.textContent = "No code loaded to copy.";
        return;
    }

    try {
        await navigator.clipboard.writeText(activeCode);
        elements.viewerFeedback.textContent = "Code copied to clipboard.";
    } catch (error) {
        elements.viewerFeedback.textContent = "Clipboard access failed.";
    }
}

function updateStatus(message) {
    elements.status.textContent = message;
}

function renderError(error) {
    elements.count.textContent = "0";
    elements.grid.replaceChildren();

    const errorState = document.createElement("div");
    errorState.className = "empty-state";
    errorState.textContent = `Unable to load program data. ${error.message}`;
    elements.grid.appendChild(errorState);

    updateStatus("Program data failed to load.");
}

function formatProgramName(name) {
    return name
        .split("_")
        .map(part => part.charAt(0).toUpperCase() + part.slice(1))
        .join(" ");
}
