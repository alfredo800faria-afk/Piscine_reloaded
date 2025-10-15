Looking at this problem, I need to create a function that returns the integer square root of a number if it's a perfect square, otherwise returns 0.

Key considerations:
- Handle edge cases: negative numbers (return 0), 0 and 1 (return themselves)
- For positive numbers, find if there's an integer whose square equals the input
- Must be efficient (less than 2 seconds) - so I'll use binary search instead of linear search
- Need to be careful about integer overflow when computing mid * mid

**Explanation:**

1. **Edge cases**: 
   - Negative numbers can't have real square roots, so return 0
   - 0 and 1 are their own square roots

2. **Binary search**: 
   - Search space is from 1 to `nb`
   - Calculate `mid` as `left + (right - left) / 2` to avoid potential overflow
   - Use `long long` for `square` to prevent integer overflow when multiplying `mid * mid`

3. **Logic**:
   - If `mid * mid == nb`, we found the exact square root
   - If `mid * mid < nb`, search in the upper half
   - If `mid * mid > nb`, search in the lower half
   - If no exact match is found after the loop, return 0

This algorithm runs in O(log n) time, which is efficient enough to handle the largest possible integer inputs well within the 2-second constraint.
