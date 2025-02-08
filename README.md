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

The library includes the following functions categorized as:

### Part 1: Standard C Library Functions

```c
ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp;
ft_strlen, ft_strcpy, ft_strncpy, ft_strcat, ft_strncat;
ft_strchr, ft_strrchr, ft_strstr, ft_strnstr, ft_strcmp, ft_strncmp;
ft_atoi, ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint;
ft_toupper, ft_tolower;
```

### Part 2: Additional Functions

```c
ft_strdup, ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_striteri;
ft_itoa, ft_strmapi, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd;
```

### Bonus: Linked List Functions

```c
ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast;
ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap;
```

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
