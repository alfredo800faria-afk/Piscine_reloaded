Here's a complete solution that meets all the requirements:

**Makefile:**
```makefile
NAME = ft_display_file

all: $(NAME)

$(NAME): ft_display_file.c
	gcc -Wall -Wextra -Werror -o $(NAME) ft_display_file.c

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
```

**ft_display_file.c:**
```c
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	int fd;
	char buffer[4096];
	ssize_t bytes_read;

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return 1;
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return 1;
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return 1;
	}
	while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		write(1, buffer, bytes_read);
	}
	close(fd);
	return 0;
}
```

This solution:

1. **Handles all error cases:**
   - No arguments: displays "File name missing."
   - Too many arguments: displays "Too many arguments."
   - Cannot read file: displays "Cannot read file."

2. **Uses only allowed functions:**
   - `open()` to open the file
   - `read()` to read file contents
   - `write()` to output to stdout/stderr
   - `close()` to close the file descriptor

3. **No malloc used:**
   - Uses a fixed-size buffer of 4096 bytes (standard buffer size)

4. **Proper Makefile:**
   - `all` rule compiles the program
   - `clean` removes object files (though none are created in this simple case)
   - `fclean` removes the binary
   - Includes `re` rule for convenience (common in school projects)

5. **Error messages:**
   - Written to stderr (file descriptor 2)
   - Each followed by a newline
   - Exact strings as specified in requirements

The program reads the file in chunks of up to 4096 bytes and writes each chunk directly to stdout until the entire file is displayed.
