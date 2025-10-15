int ft_sqrt(int nb)
{
    int left;
    int right;
    int mid;
    long long square;
    
    if (nb < 0)
        return 0;
    if (nb == 0 || nb == 1)
        return nb;
    
    left = 1;
    right = nb;
    
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        square = (long long)mid * mid;
        
        if (square == nb)
            return mid;
        else if (square < nb)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return 0;
}
