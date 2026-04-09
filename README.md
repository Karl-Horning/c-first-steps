# C first steps

Beginner C programs written around 2016 while working through [CS50 on edX](https://cs50.harvard.edu/). The code is simple and largely unmodified — kept here as an archive of early learning.

## Installation

Clone the repo and navigate to the source directory:

```bash
git clone https://github.com/Karl-Horning/c-first-steps.git
cd c-first-steps/src
```

## Usage

Compile and run any file with `gcc` or `clang`:

| Command | Description |
| --- | --- |
| `gcc hello/hello.c -o hello && ./hello` | Hello, world |
| `gcc mario/mario.c -o mario && ./mario` | Pyramid input program |
| `gcc scores/scores1.c -o scores && ./scores` | Average score calculator |

## Project structure

```text
src/
├── buggy/
│   └── buggy0.c        # Loop with an intentional logic bug
├── hello/
│   └── hello.c         # Hello, world
├── mario/
│   └── mario.c         # Double pyramid with user input (height 1–8)
├── scores/
│   ├── scores.c        # Average of three hardcoded scores
│   └── scores1.c       # Same, using a function and array
```

## License

MIT © 2016 [Karl Horning](https://github.com/Karl-Horning/)
