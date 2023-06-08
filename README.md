# libft

`libft` is a library that contains various custom functions that are commonly used in C programming.

[![nkeyani-'s 42 Libft Score](https://badge42.vercel.app/api/v2/clhk5e8o5002608lcng1o3hww/project/3094348)](https://github.com/navid-ka/libft)

## Table of Contents
- [Introduction](#introduction)
- [Functions](#functions)
    - [Bool Functions](#bool-functions)
    - [String Functions](#string-functions)
    - [File Descriptor Functions](#file-descriptor-functions)
    - [Memory Functions](#memory-functions)
    - [Linked List Functions](#linked-list-functions)
    - [ft_printf](#ft_printf)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Author](#author)

## Introduction

The `libft` library provides an assortment of utility functions, such as string manipulation, memory management, linked list operations, and more. These functions are designed to be drop-in replacements or enhancements for their standard C library counterparts.

## Functions

### Bool Functions

- `ft_isalpha`: Check if a character is an alphabetic character.
- `ft_isdigit`: Check if a character is a digit.
- `ft_isalnum`: Check if a character is alphanumeric.
- `ft_isascii`: Check if a character is a valid ASCII character.
- `ft_isprint`: Check if a character is a printable character.

### String Functions

- `ft_strlen`: Calculate the length of a string.
- `ft_strncmp`: Compare two strings up to a specified number of characters.
- `ft_toupper`: Convert a character to uppercase.
- `ft_tolower`: Convert a character to lowercase.
- `ft_strchr`: Locate the first occurrence of a character in a string.
- `ft_strrchr`: Locate the last occurrence of a character in a string.
- `ft_strdup`: Duplicate a string.
- `ft_strlcpy`: Copy a string into a fixed-size buffer.
- `ft_strlcat`: Concatenate two strings with size limitation.
- `ft_strnstr`: Locate a substring within a string.
- `ft_substr`: Extract a substring from a string.
- `ft_strjoin`: Concatenate two strings.
- `ft_strtrim`: Trim leading and trailing whitespace from a string.
- `ft_split`: Split a string into an array of substrings.
- `ft_itoa`: Convert an integer to a string.
- `ft_strmapi`: Apply a function to each character of a string.
- `ft_striteri`: Apply a function to each character of a string with its index.

### File Descriptor Functions

- `ft_putchar_fd`: Output a character to a file descriptor.
- `ft_putstr_fd`: Output a string to a file descriptor.
- `ft_putendl_fd`: Output a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Output an integer to a file descriptor.

### Memory Functions

- `ft_memset`: Fill a block of memory with a specified value.
- `ft_bzero`: Set a block of memory to zero.
- `ft_memchr`: Locate the first occurrence of a byte in a memory block.
- `ft_memcpy`: Copy a block of memory.
- `ft_memcmp`: Compare two memory blocks.
- `ft_memmove`: Move a block of memory, handling overlaps.
- `ft_calloc`: Allocate and zero-initialize a block of memory.

### Linked List Functions

- `ft_lstnew`: Create a new list node.
- `ft_lstadd_front`: Add a new node at the beginning of a list.
- `ft_lstsize`: Calculate the size of a list.
- `ft_lstlast`: Get the last node of a list.
- `ft_lstadd_back`: Add a new node at the end of a list.
- `ft_lstdelone`: Delete a node from a list.
- `ft_lstclear`: Delete all nodes from a list.
- `ft_lstiter`: Apply a function to each node of a list.
- `ft_lstmap`: Create a new list, applying a function to each node of an existing list.

### ft_printf

- `ft_printf`: Sends formatted output to stdout.

## Usage

To use the `libft` library in your C project, follow these steps:

1. Clone the `libft` repository to your local machine.
2. Compile the library by running `make` in the `libft` directory. This will generate the `libft.a` archive file.
3. Include the `libft.h` header file in your source files: `#include "libft.h"`.
4. Link your program with the `libft.a` archive during the compilation process. For example: `gcc main.c -L/path/to/libft -lft -o myprogram`.

## Contributing

Contributions to `libft` are welcome! If you have any suggestions, improvements, or bug fixes, please submit a pull request or open an issue on the GitHub repository.

## License

`libft` is released under the MIT License.

## Author

This `libft` library is developed and maintained by [nkeyani-](https://github.com/navid-ka/) as part of the 42 Cursus.
