
# 🐣 C First Steps

## 📖 Table of Contents

- [🐣 C First Steps](#-c-first-steps)
  - [📖 Table of Contents](#-table-of-contents)
  - [🤓 Overview](#-overview)
  - [📦 Installation](#-installation)
  - [🚀 Scripts / Usage](#-scripts--usage)
  - [📁 Project Structure](#-project-structure)
  - [🧠 Notes](#-notes)
  - [🕰️ Why This Exists](#️-why-this-exists)
  - [📄 Licence](#-licence)
  - [👤 Author](#-author)

---

## 🤓 Overview

A small collection of beginner C programs I wrote around 2016 during my early steps into programming. These were created while working through [CS50 on edX](https://cs50.harvard.edu/) and are largely unmodified since then. The code is simple and a bit rough, but I've kept it here for nostalgia and archival purposes.

---

## 📦 Installation

No setup is required — just clone the repo:

```bash
git clone https://github.com/Karl-Horning/c-first-steps.git
cd c-first-steps/src
````

You can compile any file using a C compiler like `gcc` or `clang`.

---

## 🚀 Scripts / Usage

Here are example commands for compiling and running the programs:

| Command                                      | Description                                    |
| -------------------------------------------- | ---------------------------------------------- |
| `gcc hello/hello.c -o hello && ./hello`      | Compile and run the classic "Hello, world"     |
| `gcc mario/mario.c -o mario && ./mario`      | Compile and run the pyramid input program      |
| `gcc scores/scores1.c -o scores && ./scores` | Compile and run the scores program with arrays |

If you're using `clang`, just replace `gcc` with `clang`.

---

## 📁 Project Structure

```text
src/
├── buggy/
│   └── buggy0.c        # A simple loop with a minor logic bug
├── hello/
│   └── hello.c         # The classic "Hello, world" program
├── mario/
│   └── mario.c         # A basic pyramid visualisation with input handling
├── scores/
│   ├── scores.c        # Calculates the average of three hardcoded scores
│   └── scores1.c       # Uses an array and a function to calculate the average
```

---

## 🧠 Notes

- These were my first attempts at programming in C.
- They use only standard libraries (for example, `stdio.h`).
- `mario.c` prompts the user for a height between 1–8 and prints a double-pyramid.
- `scores1.c` is an early introduction to functions and arrays.

---

## 🕰️ Why This Exists

I never went much further with C, but I'm keeping these files here as a small time capsule of my learning journey. They're not meant to be perfect or idiomatic — just a record of where I started.

---

## 📄 Licence

None. Feel free to use or remix anything here for your own learning.

---

## 👤 Author

Made with ❤️ by [Karl Horning](https://github.com/Karl-Horning)
