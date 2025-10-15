Here's the implementation of `ft_strlen.c` that reproduces the behavior of the standard `strlen` function:

```c
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
```

This function:
- Takes a pointer to a null-terminated string as input
- Initializes a counter to 0
- Iterates through each character of the string until it encounters the null terminator (`'\0'`)
- Returns the total count of characters (excluding the null terminator)

The implementation follows the exact behavior of the standard `strlen` function and uses no external functions, as required.
