# C Programs Archive Website

## Description

This project is a dynamic static website for browsing, previewing, and downloading C programs. It is designed to work entirely on the frontend using JSON metadata and `fetch()` to load source files on demand, making it suitable for lightweight hosting on GitHub Pages.

Users can:

- Browse a catalog of C programs
- Preview source code dynamically in the browser
- Download `.c` source files
- Download compiled binaries as `.zip` archives

## Features

- Dynamic loading via JSON with no hardcoded source code inside the HTML
- Code preview powered by `fetch()`
- Downloadable `.c` source files and binary archives
- Search and filtering support
- Responsive UI for mobile, tablet, and desktop
- GitHub Pages ready deployment

## Tech Stack

- HTML5
- CSS3
- JavaScript (Vanilla)
- JSON
- Prism.js

## Project Structure

```text
.
├── bin/
│   └── *.zip
├── code/
│   └── *.c
├── data/
│   └── files.json
├── index.html
├── script.js
├── style.css
└── README.md
```

## How It Works

The site does not store program source code directly inside the page markup.

1. `data/files.json` stores metadata for each C program.
2. `script.js` fetches the JSON file and builds the program cards dynamically.
3. When a user clicks `View Code`, the related `.c` file is fetched from the `code/` directory.
4. The source is safely rendered using `textContent`, then highlighted with Prism.js.
5. Source files and binary archives are served as static downloads.

No backend or database is required.

## Setup Instructions

1. Clone the repository:

```bash
git clone https://github.com/chriz-3656/c-codes.git
cd c-codes
```

2. Start a local static server:

```bash
python3 -m http.server 8000
```

3. Open the project in your browser:

```text
http://localhost:8000
```

## Deployment

This project is ready for GitHub Pages.

1. Push the repository to GitHub.
2. Open the repository `Settings`.
3. Go to `Pages`.
4. Under `Build and deployment`, select `Deploy from a branch`.
5. Choose branch `main`.
6. Choose folder `/ (root)`.
7. Save the configuration.

After deployment, the site will be available at:

```text
https://chriz-3656.github.io/c-codes/
```

## Screenshots

Screenshots can be added here later:

- Homepage preview
- Code viewer modal
- Mobile responsive layout

## Developer

- Name: Chriz
- GitHub: https://github.com/chriz-3656
- Portfolio: https://chriz-3656.github.io

## License

MIT
