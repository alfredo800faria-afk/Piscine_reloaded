Based on the provided main function, we need to define a `t_point` structure that contains `x` and `y` members. The main function shows that these members are accessed directly and assigned integer values (42 and 21).

Here's the complete `ft_point.h` file:

```c
#ifndef FT_POINT_H
#define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

#endif
```

This header file:
1. Uses include guards (`#ifndef FT_POINT_H`, `#define FT_POINT_H`, `#endif`) to prevent multiple inclusions
2. Defines a structure `s_point` with two integer members `x` and `y`
3. Creates a typedef alias `t_point` for the structure, which matches the type used in the main function

The structure members are defined as `int` since the main function assigns integer literals (42 and 21) to them, which is the most logical and common choice for point coordinates in this context.
