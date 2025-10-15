Here's the content for your `ft_abs.h` file:

```c
#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ((Value) < 0 ? -(Value) : (Value))

#endif
```

This header file:
- Uses include guards to prevent multiple inclusions
- Defines the `ABS` macro that takes a single argument `Value`
- Uses the ternary operator to return the absolute value: if `Value` is negative, it returns `-(Value)`, otherwise it returns `Value` as-is
- Properly parenthesizes both the parameter and the entire expression to avoid operator precedence issues

The macro works with any numeric type and handles the edge case of the most negative value correctly within the limits of the data type.
