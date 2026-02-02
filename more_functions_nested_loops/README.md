# C - More Functions, more nested loops

## Project Description

This project provides **additional practice with functions and nested loops**, focusing on character classification, mathematical operations, and pattern generation. Students work with custom functions to check character properties and create complex output patterns.

## Concepts Covered

- Character classification functions
- Digit and letter checking
- Pattern generation with nested loops
- Mathematical operations in functions
- Modular function design
- Complex loop nesting
- Output formatting
- FizzBuzz algorithm

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix
- **Header Files**: main.h

## Tasks

### 0-isupper.c
**What it does**: Checks if a character is uppercase.

**How it works**:
- Takes a character as parameter
- Returns 1 if character is uppercase (A-Z)
- Returns 0 otherwise
- Demonstrates character comparison and classification

### 1-isdigit.c
**What it does**: Checks if a character is a digit.

**How it works**:
- Takes a character as parameter
- Returns 1 if character is a digit (0-9)
- Returns 0 otherwise
- Uses character ASCII values for comparison

### 2-mul.c
**What it does**: Multiplies two integers and returns the product.

**How it works**:
- Takes two integers as parameters
- Performs multiplication
- Returns the result
- Simple arithmetic function

### 3-print_numbers.c
**What it does**: Prints all single-digit numbers (0-9) on one line.

**How it works**:
- Uses a loop to iterate from 0 to 9
- Prints each number using `_putchar()`
- Adds newline at the end
- Demonstrates simple number iteration

### 4-print_most_numbers.c
**What it does**: Prints digits 0-9 except 2 and 4.

**How it works**:
- Uses loop from 0 to 9
- Skips numbers 2 and 4 with conditional check
- Prints remaining digits (0,1,3,5,6,7,8,9)
- Adds newline at end
- Demonstrates conditional iteration

### 5-more_numbers.c
**What it does**: Prints numbers 0-14 ten times, each set on new line.

**How it works**:
- Outer loop runs 10 times (for 10 rows)
- Inner loop counts from 0 to 14
- For two-digit numbers, prints tens digit then ones digit
- Each row on new line
- Demonstrates number formatting in loops

### 6-print_line.c
**What it does**: Prints a line of characters.

**How it works**:
- Takes number of characters to print as parameter
- If n <= 0, prints newline only
- Uses loop to print n underscores
- Adds newline at end
- Demonstrates repeated character output

### 7-print_diagonal.c
**What it does**: Prints a diagonal line pattern.

**How it works**:
- Takes number of lines as parameter
- For each line, prints appropriate number of spaces then a backslash
- Creates diagonal line from top-left to bottom-right
- Each element on new line
- Demonstrates position-based output

### 8-print_square.c
**What it does**: Prints a square pattern using characters.

**How it works**:
- Takes size as parameter
- Uses nested loops: outer for rows, inner for columns
- Prints '#' character for each position
- Each row on new line
- Creates size x size grid
- Demonstrates 2D pattern generation

### 9-fizz_buzz.c
**What it does**: Prints FizzBuzz pattern (numbers with special replacements).

**How it works**:
- Iterates from 1 to 100
- If divisible by 3: prints "Fizz"
- If divisible by 5: prints "Buzz"
- If divisible by 15: prints "FizzBuzz"
- Otherwise prints the number
- Separates output with spaces
- Famous programming exercise demonstrating conditional logic

### 10-print_triangle.c
**What it does**: Prints a triangle pattern.

**How it works**:
- Takes size as parameter
- Outer loop for each row (1 to size)
- For each row: prints leading spaces then '#' characters
- Number of '#' increases with each row
- Creates triangle shape pointing upward
- Demonstrates graduated pattern generation
