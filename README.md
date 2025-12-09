*This project has been created as part of the 42 curriculum by <login>.*

# 📚 Libft

## 📝 Description
Libft is the first project of the 42 curriculum.  
Its purpose is to recreate a small, custom standard C library by re-implementing a set of essential standard functions, as well as additional utility functions that will be used in later projects.

The goal of this project is to:
- Understand low-level memory manipulation  
- Learn how to organize a reusable C library  
- Practice writing clean, modular, norm-compliant C code  
- Build a foundation for all future 42 projects

This library compiles into `libft.a` using the provided `Makefile`.

---

## 🔧 Instructions

### ✔️ Compilation
To compile the library:
```bash
make

To clean object files:

make clean


To remove objects + library:

make fclean


To recompile from scratch:

make re


If bonus functions are included:

make bonus


After compiling, include the library in your C program:

gcc main.c libft.a


And in your source files:

#include "libft.h"

📂 Library Overview

Libft contains re-implemented standard C functions + additional utilities.

🧩 Part 1 — Libc Functions

Character checks:
ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint

String manipulation:
ft_strlen, ft_strlcpy, ft_strlcat, ft_strdup, ft_strchr,
ft_strrchr, ft_strncmp, ft_strnstr

Memory handling:
ft_memset, ft_bzero, ft_memcpy, ft_memmove,
ft_memchr, ft_memcmp, ft_calloc

Conversions:
ft_atoi, ft_tolower, ft_toupper

🧩 Part 2 — Additional Functions

ft_substr, ft_strjoin, ft_strtrim, ft_split,
ft_itoa, ft_strmapi, ft_striteri,
ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

🧩 Bonus (if enabled)

Linked list utilities using t_list:

ft_lstnew

ft_lstadd_front

ft_lstsize

ft_lstlast

ft_lstadd_back

ft_lstdelone

ft_lstclear

ft_lstiter

ft_lstmap

📚 Resources

Classic references used for this project:

man pages for libc functions

The C Programming Language (K&R)

Tutorials and documentation on memory management and pointers

42 subject PDF

💬 Use of AI

AI (ChatGPT) was used only for:

Clarifying C concepts

Understanding segmentation faults / memory models

Improving explanations and writing this README

Getting guidance on Makefile structure
No code was directly copied or inserted into the project, following 42’s rules.