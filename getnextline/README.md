*This project has been created as part of the 42 curriculum by tchian.*

# Get Next Line

## Description

Get Next Line is a C project that implements `char *get_next_line(int fd)`.
Each call returns the next line read from a file descriptor. The returned line
includes its terminating newline when one is present. At end-of-file, the
function can return a final line that does not end in `\n`; it returns `NULL`
when no more line is available or when an error occurs.

This package follows the mandatory part of the supplied Get Next Line subject
(version 14.3). It includes a small `main.c` test program, which is for local
testing and is not part of the mandatory submission files.

## Files

- `get_next_line.c`: reading, persistent saved data, and line extraction.
- `get_next_line_utils.c`: string helper functions.
- `get_next_line.h`: function declarations and default `BUFFER_SIZE`.
- `main.c`: optional command-line test program.
- `Makefile`: builds a static library or the test program.

## Instructions

Build the library:

```sh
make
```

This creates `libgnl.a`.

Build the test program:

```sh
make test
```

Run it against a text file:

```sh
./gnl_test test.txt
```

Try different buffer sizes:

```sh
cc -Wall -Wextra -Werror -D BUFFER_SIZE=1 \
  get_next_line.c get_next_line_utils.c main.c -o gnl_test
```

The source also defines a default `BUFFER_SIZE` of 42 when no compile-time
value is supplied.

Clean generated files:

```sh
make clean
make fclean
make re
```

## Algorithm

1. Allocate a read buffer of `BUFFER_SIZE + 1` bytes.
2. Read from the supplied file descriptor until a newline is found or `read`
   reaches end-of-file.
3. Append each read chunk to a static saved string. The static variable
   retains unread data between calls without using a global variable.
4. Extract the first line, including `\n` if present.
5. Keep the remaining text for the next call.
6. Return `NULL` when no line remains or if an error/allocation failure occurs.

The function uses `read`, `malloc`, and `free`. It does not use `lseek`,
libft, or global variables. The mandatory implementation keeps one static
saved string and is intended for one file descriptor at a time; simultaneous
interleaved descriptors are part of the subject's bonus requirements.

## Testing checklist

Test at least these cases:

- Empty file.
- One line ending in `\n`.
- One line without a final `\n`.
- Multiple lines.
- Blank lines.
- A buffer size of 1.
- A buffer size larger than the input.
- Invalid file descriptor.

## Resources

- The supplied Get Next Line subject, version 14.3.
- `man 2 read`, `man 2 open`, and `man 3 malloc`.
- 42 project instructions and peer evaluation.

AI assistance was used to assemble this starter implementation, explain the
project structure, and prepare the Makefile and README. Review the code,
understand each helper function, and test it yourself before submission.
