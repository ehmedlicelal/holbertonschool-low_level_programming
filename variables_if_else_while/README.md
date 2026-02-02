# C - Variables, if, else, while

## Project Description

This project focuses on **basic program control flow and variable handling**. Students learn to work with different variable types, use conditional statements (if/else), and create loops (while). These fundamentals are essential for any C program.

## Concepts Covered

- Variable declaration and assignment
- Integer, character, and floating-point types
- Conditional statements (if, else if, else)
- Comparison operators
- Logical operators
- While loops
- Loop control (break, continue)
- Nested conditionals
- Number systems (decimal, hexadecimal)
- Character manipulation

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix

## Tasks

### 0-positive_or_negative.c
**What it does**: Determines if a number is positive, negative, or zero.

**How it works**:
- Reads or uses a predefined number
- Uses if-else statements to check sign
- Prints appropriate message: "is positive", "is negative", or "is zero"
- Demonstrates basic conditional logic

### 1-last_digit.c
**What it does**: Determines properties of the last digit of a number.

**How it works**:
- Extracts last digit using modulo operator (%)
- Checks if last digit is greater than 5, less than 6 and not 0, or is 0
- Prints appropriate message for each case
- Demonstrates modulo operator and conditional branching

### 2-print_alphabet.c
**What it does**: Prints the lowercase alphabet (a-z).

**How it works**:
- Uses while loop to iterate from 'a' to 'z'
- For each iteration, prints the character using `putchar()`
- Increments character value
- Adds newline at end
- Demonstrates character iteration

### 3-print_alphabets.c
**What it does**: Prints lowercase and uppercase alphabet.

**How it works**:
- Uses while loops to print lowercase (a-z)
- Uses another while loop to print uppercase (A-Z)
- Each loop increments character value
- Prints alphabets consecutively on one line
- Demonstrates multiple loops and character ranges

### 4-print_alphabt.c
**What it does**: Prints alphabet except for letters 'e' and 'q'.

**How it works**:
- Iterates through all letters a-z using while loop
- Uses if statement to skip 'e' and 'q'
- Prints all other letters
- Demonstrates conditional skipping in loops

### 5-print_numbers.c
**What it does**: Prints all single-digit numbers (0-9).

**How it works**:
- Uses while loop starting from 0
- For each iteration, prints digit using `putchar()`
- Converts integer to ASCII character by adding '0'
- Increments counter
- Adds newline at end

### 6-print_numberz.c
**What it does**: Prints numbers 0-9 using a while loop.

**How it works**:
- Similar to 5-print_numbers.c
- Uses while loop instead of for loop
- Converts integers to ASCII characters
- Prints each digit
- Demonstrates while loop for digit printing

### 7-print_tebahpla.c
**What it does**: Prints the alphabet in reverse order (z-a).

**How it works**:
- Uses while loop starting from 'z'
- Decrements character value each iteration
- Prints character
- Stops when reaching 'a'
- Demonstrates reverse iteration

### 8-print_base16.c
**What it does**: Prints all hexadecimal digits (0-9, a-f).

**How it works**:
- Uses while loop to iterate from 0 to 15
- For values 0-9, prints digit
- For values 10-15, prints corresponding letters a-f
- Uses character arithmetic and conditionals
- Demonstrates hexadecimal number system

### 9-print_comb.c
**What it does**: Prints all possible combinations of single digits in ascending order.

**How it works**:
- Uses while loops to generate combinations
- Prints digits 0-9 with commas and spaces
- Only prints combinations in increasing order
- Uses nested conditions
- Example output: 0, 1, 2, 3, ..., 8, 9

### 100-print_comb3.c
**What it does**: Prints all combinations of two different digits in ascending order.

**How it works**:
- Uses nested while loops to generate two-digit combinations
- First digit ranges from 0 to 8
- Second digit ranges from first digit + 1 to 9
- Ensures digits are different and in ascending order
- Formats output with commas and spaces
- Example output: 01, 02, 03, ..., 89
