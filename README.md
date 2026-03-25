# C Programs Archive 🚀

Deployed on Cloudflare Pages ☁️  
Fast, secure, and globally distributed.

## Live Demo

- 🌐 Cloudflare Pages: https://c-codes.pages.dev/
- 🔍 Easy Access Link: https://c-codes.pages.dev/
- 💻 GitHub Repo: https://github.com/chriz-3656/c-codes

## Overview

This project is a dynamic static website for exploring C programs through a clean, developer-focused interface. It lets users browse programs, preview source code dynamically, and download both source files and compiled binaries without hardcoding any C code into the HTML.

Core capabilities include:

- Code preview loaded dynamically
- Downloadable source files and binaries
- Fast search and filtering
- Clean developer-focused UI

## Features

- ⚡ Dynamic code loading using JSON + `fetch()`
- 🔍 Real-time search filtering
- 📥 Download `.c` files and binaries
- 🎨 Modern dark UI
- 📱 Fully responsive design
- ☁️ Deployed on Cloudflare Pages
- 🔒 No hardcoded source code

## Tech Stack

- HTML5
- CSS3 (Responsive + Grid)
- JavaScript (Vanilla)
- JSON
- Prism.js
- Cloudflare Pages

## Project Structure

```text
code/
bin/
data/
index.html
style.css
script.js
```

## How It Works

- `files.json` stores metadata for each program
- JavaScript dynamically loads the program list
- `fetch()` loads the actual `.c` files on demand
- No backend is required

The site is fully static, but still behaves dynamically by separating data, UI, and source file delivery.

## Setup (Local)

```bash
git clone https://github.com/chriz-3656/c-codes.git
cd c-codes
python3 -m http.server 8000
```

Open:

```text
http://localhost:8000
```

## Deployment

### Cloudflare Pages

- Connect the GitHub repository
- Select branch: `main`
- Build command: none
- Output directory: `/`
- Enable auto deploy

### GitHub Pages (Optional)

- Enable GitHub Pages in repository settings
- Select the `main` branch

## Screenshots

Add screenshot placeholder here:

- Homepage
- Code preview modal
- Mobile responsive layout

## Developer 👨‍💻

Chriz  
Cybersecurity student & developer

- GitHub: https://github.com/chriz-3656
- Portfolio: https://chriz-3656.github.io

## Highlights

- Fully static yet dynamic behavior
- Scalable architecture driven by JSON
- Clean separation of data and UI

## Future Improvements

- WASM-based C execution in the browser
- File hash verification with SHA256
- Category filters
- Analytics dashboard

## License

MIT License
