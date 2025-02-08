# Libft

## Introduction

ibft is a custom C library developed as part of the 42 School curriculum. It consists of a set of functions that extend the standard C library, including functions for handling strings, memory management, linked lists, and more.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Functions](#functions)
- [Testing](#testing)
- [License](#license)

## Installation

To compile and use the library, clone the repository and run the following command:

```sh
make
```

This will generate a `libft.a` archive file that can be linked to other C projects.

## Usage

To use `libft` in your project, include the header file and link the compiled library:

```c
#include "libft.h"
```

Compile your project with `libft.a`:

```sh
gcc my_program.c -L. -lft -o my_program
```

## Functions

The library includes the following:

| Function          | Description                                                         |
| ----------------- | ------------------------------------------------------------------- |
| `ft_memset`       | Fills memory with a constant byte.                                  |
| `ft_bzero`        | Writes zeroes to a byte string.                                     |
| `ft_memcpy`       | Copies memory area.                                                 |
| `ft_memmove`      | Moves memory area safely.                                           |
| `ft_memchr`       | Scans memory for a character.                                       |
| `ft_memcmp`       | Compares memory areas.                                              |
| `ft_strlen`       | Computes the length of a string.                                    |
| `ft_strcpy`       | Copies a string.                                                    |
| `ft_strncpy`      | Copies a string up to n characters.                                 |
| `ft_strcat`       | Concatenates two strings.                                           |
| `ft_strncat`      | Concatenates two strings up to n characters.                        |
| `ft_strchr`       | Locates a character in a string.                                    |
| `ft_strrchr`      | Locates the last occurrence of a character in a string.             |
| `ft_strstr`       | Finds the first occurrence of a substring.                          |
| `ft_strnstr`      | Finds a substring with a limited search length.                     |
| `ft_strcmp`       | Compares two strings.                                               |
| `ft_strncmp`      | Compares two strings up to n characters.                            |
| `ft_atoi`         | Converts a string to an integer.                                    |
| `ft_isalpha`      | Checks if a character is alphabetic.                                |
| `ft_isdigit`      | Checks if a character is a digit.                                   |
| `ft_isalnum`      | Checks if a character is alphanumeric.                              |
| `ft_isascii`      | Checks if a character is ASCII.                                     |
| `ft_isprint`      | Checks if a character is printable.                                 |
| `ft_toupper`      | Converts a character to uppercase.                                  |
| `ft_tolower`      | Converts a character to lowercase.                                  |
| `ft_strdup`       | Duplicates a string.                                                |
| `ft_substr`       | Extracts a substring.                                               |
| `ft_strjoin`      | Joins two strings.                                                  |
| `ft_strtrim`      | Trims characters from a string.                                     |
| `ft_split`        | Splits a string by a delimiter.                                     |
| `ft_itoa`         | Converts an integer to a string.                                    |
| `ft_strmapi`      | Applies a function to a string.                                     |
| `ft_striteri`     | Applies a function to each character of a string with its index.    |
| `ft_putchar_fd`   | Outputs a character to a file descriptor.                           |
| `ft_putstr_fd`    | Outputs a string to a file descriptor.                              |
| `ft_putendl_fd`   | Outputs a string followed by a newline.                             |
| `ft_putnbr_fd`    | Outputs an integer to a file descriptor.                            |
| `ft_lstnew`       | Creates a new list element.                                         |
| `ft_lstadd_front` | Adds an element to the front of a list.                             |
| `ft_lstsize`      | Counts the number of elements in a list.                            |
| `ft_lstlast`      | Returns the last element of a list.                                 |
| `ft_lstadd_back`  | Adds an element to the back of a list.                              |
| `ft_lstdelone`    | Deletes a single element of a list.                                 |
| `ft_lstclear`     | Clears an entire list.                                              |
| `ft_lstiter`      | Iterates over a list and applies a function.                        |
| `ft_lstmap`       | Applies a function to each element of a list and creates a new one. |

## Testing

You can use third-party testers like:

- [Libft Unit Tester](https://github.com/alelievr/libft-unit-test)
- [libft-war-machine](https://github.com/ska42/libft-war-machine)

Run them to validate your implementation:

```sh
./run_tests.sh
```

---

_Project by [Asier]_
