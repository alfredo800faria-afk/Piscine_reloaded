Here's the implementation of `ft_range.c` according to the specifications:

```c
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	
	return (range);
}
```

This function:

1. **Checks the condition**: If `min >= max`, returns `NULL` immediately
2. **Calculates the size**: The number of integers needed is `max - min`
3. **Allocates memory**: Uses `malloc` to allocate enough space for `size` integers
4. **Handles allocation failure**: If `malloc` returns `NULL`, propagates the `NULL` return
5. **Fills the array**: Populates the array with values from `min` (inclusive) to `max` (exclusive)
6. **Returns the pointer**: Returns the pointer to the allocated and filled array

The function correctly handles:
- Edge cases where `min >= max`
- Memory allocation failures
- Proper range generation with min included and max excluded
- Only uses the allowed `malloc` function
