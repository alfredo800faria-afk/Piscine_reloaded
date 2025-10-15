int ft_iterative_factorial(int nb)
{
    int result;
    int i;

    if (nb < 0)
        return 0;
    if (nb == 0 || nb == 1)
        return 1;
    
    result = 1;
    i = 2;
    while (i <= nb)
    {
        result *= i;
        i++;
    }
    return result;
}
