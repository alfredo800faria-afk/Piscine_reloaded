Here's the implementation of `ft_recursive_factorial.c` according to the requirements:

**Explanation:**

1. **Error handling**: If `nb` is negative, factorial is undefined, so we return 0 as specified.

2. **Base cases**: 
   - `0! = 1` (by mathematical definition)
   - `1! = 1`
   Both return 1.

3. **Recursive case**: For any positive integer `n > 1`, `n! = n × (n-1)!`

4. **No external functions used**: The implementation uses only basic arithmetic operations and conditional logic, adhering to the "Allowed functions: None" constraint.

The function handles all edge cases correctly:
- Negative numbers → return 0
- 0 and 1 → return 1  
- Positive integers → compute factorial recursively
