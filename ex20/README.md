Here's the implementation of `ft_strdup.c` that reproduces the behavior of the standard `strdup` function:

```c
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
```

This implementation:

1. **Calculates the length** of the source string by counting characters until the null terminator
2. **Allocates memory** for a new string of size `length + 1` (to include the null terminator)
3. **Checks for allocation failure** - returns `NULL` if `malloc` fails
4. **Copies each character** from the source string to the newly allocated memory
5. **Adds the null terminator** at the end
6. **Returns a pointer** to the duplicated string

The function uses only `malloc` as the allowed function and correctly handles:
- Empty strings (returns a pointer to a string containing just `'\0'`)
- Memory allocation failure (returns `NULL`)
- Proper null termination

Note: The original `strdup` function from the standard library takes a `const char *` parameter, but since the assignment specifies the prototype as `char *ft_strdup(char *src)`, I've followed that exact signature.
