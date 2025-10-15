Here's the implementation of `ft_strcmp.c` that reproduces the behavior of the standard `strcmp` function:

```c
int ft_strcmp(char *s1, char *s2)
{
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (*str1 && *str2 && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}
```

**Explanation:**

1. **Function prototype**: `int ft_strcmp(char *s1, char *s2);` matches the required signature.

2. **Behavior**: 
   - Compares two strings lexicographically
   - Returns 0 if strings are identical
   - Returns a negative value if `s1` is lexicographically less than `s2`
   - Returns a positive value if `s1` is lexicographically greater than `s2`

3. **Implementation details**:
   - Casts the input pointers to `unsigned char *` to handle potential signed/unsigned char issues correctly (as specified by the C standard for `strcmp`)
   - Uses a while loop to iterate through both strings as long as:
     - Both characters are non-null (`*str1 && *str2`)
     - The characters are equal (`*str1 == *str2`)
   - When the loop exits, it returns the difference between the first differing characters (or null terminators)
   - This difference correctly indicates the lexicographical relationship between the strings

4. **Edge cases handled**:
   - Empty strings (returns 0)
   - One empty string vs non-empty (returns appropriate positive/negative value)
   - Strings with different lengths but same prefix
   - Identical strings of any length

This implementation exactly matches the behavior described in the `man strcmp` documentation and uses no external functions.
