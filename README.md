# LIBFT

*This project has been created as part of the 42 curriculum by zo-rakot*

## Description
---
The LIBFT project consists of creating a custom C library, which contains standard functions and additional functionalities that are commonly used in C programming. The primary goal is to gain a deeper understanding of memory management, data structures, and the functioning of C libraries. This project aims to equip students with the skills necessary to implement their own functions, supplementing their programming toolkit.

## Instructions
---
To compile and use the LIBFT library, follow the instructions below:

1. **Clone the repository:**
   ```bash
   git clone
    ```
2. **Navigate to the folder**
    ```bash
   cd libft or additional name of clone
    ```
3. **Compile the library:**
    Use the make command to compile the library.
    ```bash
    bash :
    make
    ```
    This will create a libft.a file in the repository.

4. **Include the library in your projects:**
    Add the following line in your C files to include the LIBFT header:
    ```bash
    c :
    #include "libft.h"
    ```
5. **Link the library during compilation:**
    When compiling your own projects, link the library using:
    ```bash
    bash :
    gcc -o your_program your_program.c -L. -libft
    ```
## Resources
---
    C Standard Library Documentation
    42 Curriculum Documentation
    Memory Management in C
    Various articles and tutorials found on platforms like Medium and dev.to.

## AI Usage
---
AI tools were utilized for:

    Code reviews: Ensuring adherence to coding standards and best practices.
    Understanding complex concepts: Assisting in the explanation of specific functions and optimization techniques.

## Detailed Description of the Library
---

The LIBFT library includes the following main components:

### Part 1 : Memory Management ,String Manipulation , Character Classification , Conversion Functions: ###
    
    isalpha, isdigit, isalnum, isascii, isprint, strlen, memset, bzero, memcpy, memmove, strlcpy, strlcat, toupper, tolower, strchr, strrchr, strncmp, memchr, memcmp, strnstr, atoi

### Part 2 : Part 2 - Additional functions ###

    ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd, 

### Part 3 : Linked List Functions: ###

    ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

**The library is designed to be modular, allowing for easy extension and modification as needed.**
Additional Notes

> **All functions were previously tested with a LIBTESTEUR tester**

