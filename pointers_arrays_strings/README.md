# C - Pointers, Arrays and Strings

## Project Description

This project covers **pointers, arrays, and string manipulation** in C. Students learn how pointers work, how to manipulate arrays and strings, and how to implement common string operations. These are foundational concepts for C programming.

## Concepts Covered

- Pointer declaration and dereferencing
- Pointer arithmetic
- Arrays and array indexing
- Strings as character arrays
- String manipulation functions
- Memory addresses and the `&` operator
- The `*` operator for dereferencing
- Null terminators in strings
- Character classification and manipulation
- String comparison and searching

## Requirements

- **Compiler**: gcc
- **Flags**: `-Wall -Werror -Wextra`
- **Betty Style**: Must pass Betty style checking
- **Platform**: Linux/Unix
- **Header Files**: main.h

## Tasks

### 0-reset_to_98.c
**What it does**: Changes the value of a variable to 98 using a pointer.

**How it works**:
- Takes a pointer to an integer as parameter
- Dereferences the pointer to access the original variable
- Sets the dereferenced value to 98
- Demonstrates how pointers allow modifying variables indirectly

### 1-swap.c
**What it does**: Swaps the values of two variables using pointers.

**How it works**:
- Takes two pointers to integers
- Uses a temporary variable to hold one value
- Swaps values through pointer dereferencing
- Demonstrates passing variables by reference

### 2-strlen.c
**What it does**: Counts and returns the length of a string (excluding null terminator).

**How it works**:
- Takes a string pointer as parameter
- Iterates through characters until finding the null terminator (`\0`)
- Counts each character
- Returns the total count
- Demonstrates string iteration

### 3-puts.c
**What it does**: Prints a string followed by a new line.

**How it works**:
- Takes a string pointer as parameter
- Iterates through each character until null terminator
- Prints each character
- Adds a newline at the end
- Similar functionality to standard `puts()` function

### 4-print_rev.c
**What it does**: Prints a string in reverse order.

**How it works**:
- Takes a string pointer as parameter
- First finds the length of the string
- Iterates backward from last character to first
- Prints each character in reverse
- Demonstrates reverse iteration

### 5-rev_string.c
**What it does**: Reverses a string in-place.

**How it works**:
- Takes a string pointer as parameter
- Swaps characters from both ends moving toward the center
- Modifies the original string
- Demonstrates two-pointer technique

### 6-puts2.c
**What it does**: Prints every other character of a string (every 2nd character).

**How it works**:
- Takes a string pointer as parameter
- Iterates through string with step of 2 (0, 2, 4, ...)
- Prints only characters at even indices
- Demonstrates selective iteration

### 7-puts_half.c
**What it does**: Prints the second half of a string.

**How it works**:
- Calculates string length
- Finds the midpoint
- For odd-length strings, starts from (length / 2) + 1
- For even-length strings, starts from length / 2
- Prints characters from midpoint to end

### 8-print_array.c
**What it does**: Prints array elements separated by commas and spaces.

**How it works**:
- Takes an array pointer, size, and element count
- Iterates through array elements
- Prints each element followed by ", " except the last
- Last element has no comma
- Demonstrates array iteration and formatting

### 9-strcpy.c
**What it does**: Copies a string to another location.

**How it works**:
- Takes destination and source string pointers
- Copies characters one by one from source to destination
- Includes the null terminator
- Returns pointer to destination
- Demonstrates string copying logic

### 0-strcat.c
**What it does**: Appends one string to another.

**How it works**:
- Takes destination and source string pointers
- Finds the end of destination string
- Copies source characters to the end
- Includes null terminator
- Returns pointer to destination
- Demonstrates string concatenation

### 1-strncat.c
**What it does**: Appends n characters of one string to another.

**How it works**:
- Takes destination, source, and n (number of characters)
- Finds end of destination
- Copies only n characters from source
- Adds null terminator
- Returns pointer to destination
- Safe version of string concatenation

### 2-strncpy.c
**What it does**: Copies n characters of a string.

**How it works**:
- Takes destination, source, and n
- Copies only n characters from source
- Does not add null terminator if n characters used
- Returns pointer to destination
- Demonstrates limited string copying

### 3-strcmp.c
**What it does**: Compares two strings lexicographically.

**How it works**:
- Takes two string pointers
- Compares characters one by one
- Returns 0 if equal, negative if first < second, positive if first > second
- Uses ASCII values for comparison
- Demonstrates string comparison

### 4-strpbrk.c
**What it does**: Searches string for any character in another string.

**How it works**:
- Takes two string pointers (search string and character set)
- Iterates through first string
- For each character, checks if it appears in second string
- Returns pointer to first matching character
- Returns NULL if no match found

### 5-strstr.c
**What it does**: Locates a substring within a string.

**How it works**:
- Takes two string pointers (haystack and needle)
- Searches for substring (needle) in main string
- Returns pointer to first occurrence of substring
- Returns NULL if substring not found
- Demonstrates substring search

### 6-cap_string.c
**What it does**: Capitalizes first letter of words in a string.

**How it works**:
- Takes a string pointer
- Identifies word boundaries (spaces, separators)
- Capitalizes first letter of each word
- Leaves other letters unchanged
- Returns pointer to modified string

### 7-leet.c
**What it does**: Converts a string to "leet speak" (replaces certain letters with numbers).

**How it works**:
- Takes a string pointer
- Replaces: a/A→4, e/E→3, o/O→0, t/T→7, l/L→1
- Works on both uppercase and lowercase
- Returns pointer to modified string
- Demonstrates character replacement

### 0-memset.c
**What it does**: Fills memory with a constant byte.

**How it works**:
- Takes memory pointer, byte value, and size
- Sets each byte in the memory range to the specified value
- Used for initializing memory areas
- Returns pointer to memory
- Low-level memory manipulation

### 1-memcpy.c
**What it does**: Copies n bytes from source memory to destination.

**How it works**:
- Takes destination, source pointers, and size
- Copies byte-by-byte (not character aware)
- Returns pointer to destination
- Can handle any data type
- Demonstrates memory copying

### 2-strchr.c
**What it does**: Locates first occurrence of a character in a string.

**How it works**:
- Takes string pointer and character to find
- Iterates through string until character found or null terminator reached
- Returns pointer to first occurrence
- Returns NULL if character not found

### 3-strspn.c
**What it does**: Gets length of initial segment of characters matching a set.

**How it works**:
- Takes string pointer and character set
- Counts consecutive characters from start that appear in character set
- Stops at first character not in set
- Returns count
- Used for token validation

### 4-rev_array.c
**What it does**: Reverses an array of integers in-place.

**How it works**:
- Takes array pointer and number of elements
- Swaps elements from both ends toward the center
- Modifies original array
- Demonstrates array reversal

### 5-string_toupper.c
**What it does**: Converts lowercase letters to uppercase.

**How it works**:
- Takes a string pointer
- Iterates through each character
- Converts lowercase (a-z) to uppercase (A-Z)
- Leaves other characters unchanged
- Returns pointer to modified string

### 7-print_chessboard.c
**What it does**: Prints a chessboard pattern from a 2D array.

**How it works**:
- Takes 2D array pointer (8x8 board)
- Iterates through rows and columns
- Prints each character (board position)
- Each row on new line
- Demonstrates 2D array access

### 8-print_diagsums.c
**What it does**: Prints sum of diagonals in a square matrix.

**How it works**:
- Takes square matrix pointer and matrix size
- Calculates main diagonal sum (top-left to bottom-right)
- Calculates anti-diagonal sum (top-right to bottom-left)
- Prints both sums
- Demonstrates 2D array diagonal access

### 100-atoi.c
**What it does**: Converts a string to an integer (manual implementation).

**How it works**:
- Takes string pointer
- Skips leading spaces
- Handles optional sign (+ or -)
- Accumulates numeric digits into integer value
- Stops at first non-digit character
- Returns converted integer

### 101-keygen.c
**What it does**: Generates a "password" key based on input.

**How it works**:
- Takes command-line argument (username)
- Uses character values to generate a key
- Applies mathematical operations on character values
- Produces a string key that validates against a checker program
- Demonstrates string analysis and transformation
