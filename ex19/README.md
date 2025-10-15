Here's the implementation of `ft_sort_params.c` that meets all the requirements:

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_strings(char **argv, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
		return (0);
	
	ft_sort_strings(argv + 1, argc - 1);
	
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
```

This program:

1. **Has a `main` function** as required for a complete program
2. **Only uses `ft_putchar`** as the allowed function (all other helper functions are implemented using only `ft_putchar` or basic operations)
3. **Sorts arguments by ASCII order** using a simple bubble sort algorithm with a custom `ft_strcmp` function
4. **Displays all arguments except `argv[0]`** (starts from index 1)
5. **Prints each argument on its own line** using `ft_putstr` followed by `ft_putchar('\n')`

The implementation includes:
- `ft_putchar`: wrapper for `write()` system call (as allowed)
- `ft_putstr`: helper to print strings using only `ft_putchar`
- `ft_strcmp`: compares two strings character by character based on ASCII values
- `ft_sort_strings`: sorts an array of strings using bubble sort
- `main`: handles the program logic - sorts arguments from index 1 onward and prints them

The program handles edge cases like no arguments (argc <= 1) by simply exiting without output.
