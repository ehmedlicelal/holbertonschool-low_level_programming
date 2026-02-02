## Project Description

This folder contains exercises that implement a simple **hash table** data structure in C. The tasks cover hashing functions, creating and managing hash tables, handling collisions with chaining, and basic operations such as insert, retrieve, print and delete.

## Concepts Covered

- Hash functions (string hashing)
- Converting hashes to array indices
- Collision resolution using linked lists (chaining)
- Dynamic memory allocation for nodes and tables
- String duplication and management
- Basic data structure operations: insert, search, print, delete

## Requirements

- **Compiler**: `gcc`
- **Flags**: `-Wall -Werror -Wextra`
- **Style**: Betty style recommended
- **Platform**: Linux/Unix (or WSL on Windows)

## Files / Tasks

### 0-hash_table_create.c
What it does: Allocates and initializes a new hash table structure of a given size.

How it works: Allocates the `hash_table_t` structure, allocates an array of `hash_node_t *` entries of the requested size, initializes each bucket to NULL, and returns the created table pointer or `NULL` on failure.

### 1-djb2.c
What it does: Implements the `djb2` string hashing algorithm.

How it works: Processes each byte of the input string and updates a running hash using bit-shifts and additions (classic djb2 formula). Returns an unsigned long hash value suitable for index computation.

### 2-key_index.c
What it does: Converts a hash value into a valid array index for a hash table of given size.

How it works: Calls a hash function (e.g., `djb2`) on the key then applies the modulo operation with the table size to produce an index that fits into the table's array bounds.

### 3-hash_table_set.c
What it does: Inserts a key/value pair into the hash table, updating existing keys and handling collisions.

How it works: Computes the bucket index using the key and table size. If the key already exists in the chain at that index, it updates the value (frees the old value then duplicates the new one). Otherwise, it creates a new `hash_node_t`, duplicates the key and value strings, and inserts the node at the head of the chain (chaining) to resolve collisions.

### 4-hash_table_get.c
What it does: Retrieves the value associated with a key from the hash table.

How it works: Computes the index for the key, iterates the linked list at that bucket, compares stored keys with the requested key using `strcmp()`, and returns the matching value pointer if found or `NULL` if not found.

### 5-hash_table_print.c
What it does: Prints the entire hash table contents in a readable format.

How it works: Iterates each bucket of the table; for each non-empty bucket, traverses the linked list and prints key/value pairs in sequence (typically separated by commas). Useful for debugging and visual verification of stored pairs.

### 6-hash_table_delete.c
What it does: Frees all memory used by the hash table and its nodes.

How it works: Iterates through each bucket, frees every node's key and value strings and the node itself, then frees the array and the main table structure to avoid memory leaks.

### hash_tables.h
What it does: Header file declaring the `hash_node_t` and `hash_table_t` structures and function prototypes used across the tasks.

How it works: Provides the type definitions and prototypes so the implementation files can share consistent interfaces and compile together.

## High-level Notes

- The implementation uses chaining (linked lists) to handle collisions; nodes are typically inserted at the head of a bucket's chain for simplicity and speed.
- Keys and values are duplicated (using `strdup`) so the table owns its copies and can safely free them on deletion.
- The `djb2` hash is used for string hashing; combined with modulo table size it maps keys to bucket indices.


