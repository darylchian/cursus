*This project has been created as part of the 42 curriculum by tchian.*

# Libft

`libft` is a custom C static library created as part of the 42 school curriculum. It re-implements standard C library functions alongside additional utility functions for memory management, string manipulation, file descriptor output, and generic singly linked list management.

---

## Description

The goal of `libft` is to build a solid foundational library from scratch without relying on standard C library functions. By implementing these primitives manually, this project provides a deep, low-level understanding of memory allocation, pointer arithmetic, buffer handling, and dynamic data structures.

Once compiled, `libft.a` serves as a reusable static library across subsequent projects in the 42 curriculum (such as `get_next_line`, `ft_printf`, `push_swap`).

---

## Library Details

The library is defined in `libft.h` and compiled into `libft.a`. It contains **43 functions** split into distinct categories.

### Linked List Data Structure

The library includes a custom singly linked list structure defined in `libft.h`:

```c
typedef struct s_list
{
    void            *content; // Pointer to the data stored in the node
    struct s_list   *next;    // Pointer to the next node, or NULL if last
}                   t_list;
```

---

### Function Breakdown

#### 1. Standard C Library Re-implementations (`libc`)
Functions reproducing exact behavior from standard C headers (`<string.h>`, `<ctype.h>`, `<stdlib.h>`):

| Function | Signature | Description |
| :--- | :--- | :--- |
| `ft_isalpha` | `int ft_isalpha(int c)` | Tests for an alphabetic character. |
| `ft_isdigit` | `int ft_isdigit(int c)` | Tests for a decimal digit (`0-9`). |
| `ft_isalnum` | `int ft_isalnum(int c)` | Tests for an alphanumeric character. |
| `ft_isascii` | `int ft_isascii(int c)` | Tests for an ASCII character (0–127). |
| `ft_isprint` | `int ft_isprint(int c)` | Tests for any printable character including space. |
| `ft_toupper` | `int ft_toupper(int c)` | Converts a lower-case letter to upper-case. |
| `ft_tolower` | `int ft_tolower(int c)` | Converts an upper-case letter to lower-case. |
| `ft_strlen` | `size_t ft_strlen(const char *s)` | Computes the length of a string. |
| `ft_memset` | `void *ft_memset(void *b, int c, size_t len)` | Fills a memory area with a constant byte. |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Erases data in `n` bytes of memory by writing zeros. |
| `ft_memcpy` | `void *ft_memcpy(void *dst, const void *src, size_t n)` | Copies `n` bytes from memory area `src` to `dst`. |
| `ft_memmove` | `void *ft_memmove(void *dst, const void *src, size_t len)` | Safely copies `len` bytes handling overlapping memory regions. |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)` | Size-bounded string copying. |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize)` | Size-bounded string concatenation. |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | Locates first occurrence of character `c` in string `s`. |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Locates last occurrence of character `c` in string `s`. |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares up to `n` characters of two strings. |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | Locates character `c` in a memory block. |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares byte string `s1` against byte string `s2`. |
| `ft_strnstr` | `char *ft_strnstr(const char *haystack, const char *needle, size_t len)` | Locates a substring in a string within search limit `len`. |
| `ft_atoi` | `int ft_atoi(const char *nptr)` | Converts initial string digits to an integer. |
| `ft_calloc` | `void *ft_calloc(size_t count, size_t size)` | Allocates zero-initialized dynamic heap memory. |
| `ft_strdup` | `char *ft_strdup(const char *s1)` | Duplicates a string using dynamic dynamic allocation (`malloc`). |

#### 2. Non-Standard Utility Functions
Custom functions designed for string formatting, dynamic splitting, and transformation:

| Function | Signature | Description |
| :--- | :--- | :--- |
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Allocates and returns a substring from string `s`. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Allocates and concatenates two strings. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Trims characters specified in `set` from start/end of `s1`. |
| `ft_split` | `char **ft_split(char const *s, char c)` | Splits a string into an array of strings using delimiter `c`. |
| `ft_itoa` | `char *ft_itoa(int n)` | Converts an integer value into a null-terminated string. |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies function `f` to each character to create a new string. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies function `f` to each character of string in-place. |

#### 3. File Descriptor Output Functions
Output routines for writing primitive types directly to a specific file descriptor (e.g., `1` for stdout, `2` for stderr):

| Function | Signature | Description |
| :--- | :--- | :--- |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Outputs character `c` to file descriptor `fd`. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Outputs string `s` to file descriptor `fd`. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Outputs string `s` followed by a newline to `fd`. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Outputs integer `n` to file descriptor `fd`. |

#### 4. Linked List Functions
Generic linked list routines using `t_list`:

| Function | Signature | Description |
| :--- | :--- | :--- |
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Allocates and returns a new node. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Adds node `new` to the beginning of list `lst`. |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | Counts total elements in a list. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Returns pointer to the last element of the list. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Adds node `new` to the end of list `lst`. |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void*))` | Frees memory of an element using `del` function. |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void*))` | Deletes and frees target node and all successors. |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies function `f` to the content of every node. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Creates a new list by applying `f` to all nodes. |

---

## Instructions

### Prerequisites
* A standard C compiler (`cc`, `gcc`, or `clang`)
* GNU `make` utility

### Compilation
To compile the library into the static archive `libft.a`:

```bash
make
```

### Makefile Rules
* `make` or `make all` — Compiles source `.c` files into `.o` object files using `cc -Wall -Wextra -Werror` and archive them using `ar rcs libft.a`.
* `make clean` — Removes generated `.o` object files.
* `make fclean` — Removes object files and `libft.a`.
* `make re` — Executes `fclean` followed by `all` to rebuild from scratch.

### Usage in Projects
1. Include `libft.h` in your C source file:
   ```c
   #include "libft.h"
   ```
2. Compile your program alongside `libft.a`:
   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
   ```

---

## Resources

### Documentation & References
* [GNU C Library Manual](https://www.gnu.org/software/libc/manual/) — Reference manual for C standard functions.
* [IEEE POSIX Standard Specifications](https://pubs.opengroup.org/onlinepubs/9699919799/) — Open standard definitions for C calls.
* Unix `man` pages (`man 3 malloc`, `man 3 memcpy`, `man 3 string`) — Local reference documentation.

### AI Usage Disclosure
In compliance with 42 evaluation policies, Generative AI tools were utilized during this project under the following parameters:

* **Tasks Assisted:**
  * **Documentation:** Formatting and structuring the `README.md` file according to 42 submission requirements.
  * **Boundary Testing:** Identifying potential edge cases for functions (e.g., `INT_MIN`/`INT_MAX` inputs for `ft_atoi` and `ft_itoa`, handling NULL input pointers, zero-length dynamic buffers).
  * **Logic Verification:** Reviewing edge case handling for function pointer callbacks (`ft_strmapi`, `ft_lstmap`, `ft_lstclear`).
* **Implementation Scope:** All function source code, dynamic memory allocation logic, pointer handling, header definitions, and Makefile rules were written, tested, and validated manually.
