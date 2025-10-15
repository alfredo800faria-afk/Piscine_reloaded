Here's a Makefile that meets all the specified requirements:

```makefile
# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes

# Directories
SRCDIR = srcs
INCDIR = includes

# Source files (only the mandatory 5 functions)
SRC = $(SRCDIR)/ft_putchar.c \
      $(SRCDIR)/ft_putstr.c \
      $(SRCDIR)/ft_strcmp.c \
      $(SRCDIR)/ft_strlen.c \
      $(SRCDIR)/ft_swap.c

# Object files
OBJ = $(SRC:.c=.o)

# Library name
NAME = libft.a

# Default rule
all: $(NAME)

# Create the static library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compile source files to object files
$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJ)

# Clean object files and the library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Prevent Make from deleting intermediate files
.PHONY: all clean fclean re
```

This Makefile:

1. **Uses only the 5 mandatory functions**: Explicitly lists only the required source files instead of using wildcards
2. **Gets sources from "srcs" directory**: Uses `SRCDIR = srcs` and references files with `$(SRCDIR)/filename.c`
3. **Gets headers from "includes" directory**: Uses `-I includes` in CFLAGS
4. **Creates libft.a at root**: The library is built in the current directory (root of exercise)
5. **Implements all required rules**:
   - `all`: builds the library
   - `clean`: removes object files
   - `fclean`: removes object files and the library
   - `re`: performs fclean then all
6. **Avoids wildcards**: Explicitly lists each required source file
7. **Uses no forbidden functions**: Only uses standard Makefile and shell commands
8. **Includes proper dependencies**: Each object file depends on its corresponding source file
9. **Uses appropriate compiler flags**: `-Wall -Wextra -Werror` as commonly expected in libft projects

The Makefile will work with the tester's files since it only depends on the standard structure and the 5 mandatory functions.
