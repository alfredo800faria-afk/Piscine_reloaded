Here's the implementation of `ft_print_params.c` that meets the requirements:

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
```

This program:

1. **Includes the necessary header**: `<unistd.h>` for the `write` system call used in `ft_putchar`

2. **Implements `ft_putchar`**: Uses `write()` to output a single character to stdout (file descriptor 1)

3. **Main function logic**:
   - Starts from index 1 (skipping `argv[0]` which is the program name)
   - For each argument, iterates through each character and prints it using `ft_putchar`
   - After printing each argument, outputs a newline character
   - Continues until all arguments are processed

4. **Follows the specification exactly**:
   - Only uses the allowed function `ft_putchar`
   - Has a `main` function as required
   - Displays each argument on a separate line
   - Doesn't print anything when no arguments are provided

The program will produce the exact output shown in the example:
```
$ ./a.out test1 test2 test3
test1
test2
test3
```
