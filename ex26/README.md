Here's the implementation of `ft_count_if.c` according to the given specifications:

```c
int ft_count_if(char **tab, int (*f)(char*))
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (tab[i] != 0)
    {
        if (f(tab[i]) == 1)
            count++;
        i++;
    }
    return (count);
}
```

**Explanation:**

- The function takes a `char **tab` (array of strings) and a function pointer `int (*f)(char*)`
- The array is null-terminated (delimited by 0), so we iterate through it until we encounter a null pointer
- For each non-null string in the array, we call the function `f` with that string as argument
- If `f` returns 1, we increment our counter
- Finally, we return the total count of elements for which the function returned 1

The implementation uses only basic C constructs (no external functions) and correctly handles the null-terminated array as specified.
