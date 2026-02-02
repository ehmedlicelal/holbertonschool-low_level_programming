# C - Hello World

## Project Description

This project covers the **fundamentals of C compilation and output**. It demonstrates how to compile C programs using the preprocessor, assembler, and compiler, as well as basic input/output using `puts()`, `printf()`, and the `write()` system call.

## Concepts Covered

- C preprocessor directives
- Compilation pipeline (preprocessing, assembling, compiling)
- Basic output functions: `puts()`, `printf()`, `write()`
- Data type sizes using `sizeof()` operator
- Standard library functions and system calls
- Program structure and main function
- Format specifiers and string output

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix

## Scripts (Compiled/Preprocessed Files)

### 0-preprocessor
**What it does**: Preprocesses a C file without compiling it.

**How it works**:
- Runs the C preprocessor on a source file
- Outputs the preprocessed code (with macros expanded and includes processed)
- Used to see what the preprocessor produces before actual compilation

### 1-compiler
**What it does**: Compiles a C file into object code (assembly).

**How it works**:
- Takes a C source file and produces assembly language output
- Uses gcc with the `-S` flag to stop after compilation (before assembling)
- Shows the assembly code representation of the C program

### 2-assembler
**What it does**: Assembles object code into machine code.

**How it works**:
- Takes an assembly file and produces object code
- Uses gcc with the `-c` flag to assemble without linking
- Creates a `.o` (object) file containing machine code

### 3-name
**What it does**: Compiles a C file and names the executable.

**How it works**:
- Compiles and links a source file into an executable with a specified name
- Uses gcc with the `-o` flag to specify output filename
- Produces a ready-to-run executable program

## Source Code Files

### 4-puts.c
**What it does**: Prints a string using the `puts()` function.

**How it works**:
- Uses `puts()` which automatically adds a newline after printing
- Demonstrates the simplest way to output text to stdout
- More efficient than `printf()` for simple string output

### 5-printf.c
**What it does**: Prints a string using the `printf()` function.

**How it works**:
- Uses `printf()` for formatted output
- Allows more control over output format than `puts()`
- Demonstrates the `\n` escape sequence for newlines
- Shows basic format specifiers

### 6-size.c
**What it does**: Prints the size (in bytes) of various data types on the current system.

**How it works**:
- Declares variables of different types: char, int, long int, long long int, float
- Uses `sizeof()` operator to get the size of each type
- Prints sizes using `printf()` with `%lu` format specifier
- Shows how data types use different amounts of memory depending on the architecture

### 101-quote.c
**What it does**: Prints a quote to standard error instead of standard output using the `write()` system call.

**How it works**:
- Uses `write()` system call instead of printf or puts
- `write(2, ...)` writes to file descriptor 2 (stderr - standard error)
- Demonstrates direct system-level I/O
- Returns 1 instead of 0 to indicate non-standard exit
- Shows how to output directly to stderr without using standard library functions
