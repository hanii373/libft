*This project has been created as part of the 42 curriculum by <your_login>.*

# Libft

## Description

Libft is a foundational C project from the 42 curriculum where the goal is to build your own static library (libft.a) by reimplementing a set of standard C library functions and creating additional utility functions.

This project is designed to strengthen core programming skills in C, including:

* Memory management
* Pointer manipulation
* String handling
* Linked list operations
* Understanding how standard library functions work internally

The resulting library can be reused in future 42 projects and serves as a personal toolbox of reliable C functions.

## Instructions

### Compilation

To compile the library, simply run:

```bash
make
```

This will generate the `libft.a` static library at the root of the repository.

### Makefile Rules

The Makefile includes the following rules:

* `make` or `make all` – compiles the library
* `make clean` – removes object files
* `make fclean` – removes object files and `libft.a`
* `make re` – rebuilds the library from scratch

The library is compiled using the flags:

```
-Wall -Wextra -Werror
```

### Usage

To use libft in another project, include the header and link the library:

```c
#include "libft.h"
```

```bash
cc your_program.c -L. -lft
```

## Library Overview

### Part 1 – Libc Functions

Reimplementation of standard libc functions such as:

* Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* String and memory handling: `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
* String utilities: `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
* Conversion: `ft_atoi`
* Memory allocation: `ft_calloc`, `ft_strdup`

These functions behave like their original libc counterparts, with names prefixed by `ft_`.

### Part 2 – Additional Functions

Utility functions not directly available in libc or implemented differently, including:

* `ft_substr` – extract a substring
* `ft_strjoin` – concatenate two strings
* `ft_strtrim` – trim characters from beginning and end of a string
* `ft_split` – split a string using a delimiter
* `ft_itoa` – convert integer to string
* `ft_strmapi` / `ft_striteri` – apply functions to strings
* File descriptor output functions: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3 – Linked List Functions

Implementation of a simple singly linked list using the following structure:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

Functions include:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstadd_back`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

These functions allow creation, modification, traversal, and deletion of linked lists.

## Resources

### References

* `man` pages for libc functions
* The C Programming Language – Kernighan & Ritchie
* GNU C Library Documentation
* 42 Intranet Libft Subject PDF

### AI Usage

AI tools were used **only as a learning aid**, primarily for:

* Clarifying concepts (e.g., pointers, memory allocation, linked lists)
* Understanding function behavior and edge cases
* Reviewing explanations after personal attempts

No code was blindly copied. All implementations were written manually after reasoning, testing, and debugging to ensure full understanding, in accordance with the 42 AI usage rules.

## Notes

* All memory allocations are properly handled and freed when required
* No global variables are used
* Helper functions are declared `static` where appropriate
* All files respect the 42 Norm

This project represents a key milestone in building strong C programming foundations.
