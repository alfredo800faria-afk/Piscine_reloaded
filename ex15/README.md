Here's the implementation of `ft_putstr.c`:

```c
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
```

However, if you're only required to implement `ft_putstr` and `ft_putchar` is already provided/available as an allowed function, then you only need:

```c
void ft_putstr(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
```

The function works by:
1. Initializing an index counter `i` to 0
2. Looping through each character of the string until it reaches the null terminator (`'\0'`)
3. Calling `ft_putchar` to output each character to standard output
4. Incrementing the index to move to the next character

This implementation handles empty strings correctly (the loop won't execute if the first character is `'\0'`) and uses only the allowed function `ft_putchar`.
