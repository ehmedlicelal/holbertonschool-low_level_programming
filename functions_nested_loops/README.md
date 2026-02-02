# C - Functions and Nested Loops

## Project Description

This project focuses on **writing functions and using nested loops** in C. Students learn to break down problems into reusable functions, control program flow with loops, and practice fundamental programming patterns.

## Concepts Covered

- Function declaration and definition
- Function parameters and return values
- Nested loops (loops within loops)
- Loop control with `for` and `while`
- Character output using `_putchar()`
- Incremental logic and counters
- Modular function design
- Pattern generation and iteration

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix
- **Header Files**: main.h

## Tasks

### 0-putchar.c
**What it does**: Uses `_putchar()` to print the string "_putchar" character by character.

**How it works**:
- Calls `_putchar()` nine times, once for each character
- Demonstrates the custom output function used throughout the project
- Shows how to compose a string using individual character output

### 1-alphabet.c
**What it does**: Defines a function that prints the lowercase alphabet on one line.

**How it works**:
- Declares `print_alphabet()` with no parameters
- Uses a `for` loop iterating from 'a' to 'z'
- Calls `_putchar()` for each letter
- Adds a newline at the end

### 2-print_alphabet_x10.c
**What it does**: Prints the lowercase alphabet 10 times, each on a new line.

**How it works**:
- Uses nested loops: outer loop for 10 iterations, inner loop for the alphabet
- Each inner loop iteration prints one letter
- After completing the inner loop, a newline is added
- Pattern: alphabet repeated vertically 10 times

### 3-islower.c
**What it does**: Checks if a character is a lowercase letter.

**How it works**:
- Takes a character as parameter
- Returns 1 if character is lowercase ('a' to 'z')
- Returns 0 otherwise
- Demonstrates conditional logic and character comparison

### 4-isalpha.c
**What it does**: Checks if a character is an alphabetic letter (uppercase or lowercase).

**How it works**:
- Takes a character as parameter
- Returns 1 if character is a letter (a-z or A-Z)
- Returns 0 otherwise
- Uses logical OR to check both ranges

### 5-sign.c
**What it does**: Prints the sign of a number (+, -, or 0).

**How it works**:
- Takes an integer parameter
- Returns 1 if positive, -1 if negative, 0 if zero
- Uses if-else statements for conditional logic
- Demonstrates return value handling

### 6-abs.c
**What it does**: Computes the absolute value of an integer.

**How it works**:
- Takes an integer parameter
- Returns the positive version of the number (removes negative sign)
- Uses conditional logic to check if number is negative
- Returns the absolute value

### 7-print_last_digit.c
**What it does**: Prints and returns the last digit of a number.

**How it works**:
- Takes an integer parameter
- Uses modulo operator (%) to extract the last digit
- Prints the digit using `_putchar()`
- Returns the digit value
- Handles both positive and negative numbers

### 8-24_hours.c
**What it does**: Prints every minute of the day in HH:MM format (00:00 to 23:59).

**How it works**:
- Uses nested loops: outer loop for hours (0-23), inner loop for minutes (0-59)
- For each combination, prints time in HH:MM format
- Demonstrates time formatting logic
- Example output: 00:00, 00:01, ..., 23:59

### 9-times_table.c
**What it does**: Prints the 9 times multiplication table (from 1x1 to 9x9).

**How it works**:
- Uses nested loops for multiplying numbers 1 through 9
- Formats output in a table with proper spacing
- Prints one complete row per iteration of outer loop
- Demonstrates formatting multiple columns

### 10-add.c
**What it does**: Adds two integers and returns the sum.

**How it works**:
- Takes two integer parameters
- Performs addition
- Returns the result
- Simple arithmetic function

### 11-print_to_98.c
**What it does**: Prints all numbers from a given number to 98.

**How it works**:
- Takes an integer parameter `n` as starting point
- If n <= 98: prints n, n+1, n+2, ..., 98
- If n > 98: prints n, n-1, n-2, ..., 98 (counting down)
- Separates numbers with commas and spaces
- Last number has no comma
- Demonstrates directional counting logic
