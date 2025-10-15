Here's the implementation of `ft_foreach.c`:

```c
void ft_foreach(int *tab, int length, void (*f)(int))
{
    int i;

    i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}
```

This function:
- Takes an integer array (`tab`), its length (`length`), and a function pointer (`f`) that takes an integer and returns void
- Iterates through each element of the array from index 0 to `length - 1`
- Applies the given function `f` to each element in order
- Uses a simple while loop with an index counter to traverse the array
- Doesn't use any external functions (as required)

The function works exactly as described in the example - when called with `ft_foreach(tab, 1337, &ft_putnbr)`, it will call `ft_putnbr` on each of the first 1337 elements of the array `tab`.
