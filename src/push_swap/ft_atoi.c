#include "push_swap.h"

int ft_atoi(char *s)
{
    int i = 0;
    int sign = 1;
    long  res = 0;

    while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
        i++;
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }
    while (s[i])
    {
        if (!is_digit(s[i]))
            ft_error();
        res = res * 10 + s[i] - 48;
        i++;
    }   
    if ((sign == 1 && res > INT_MAX) || (sign == -1 && res > -INT_MIN))
        ft_error();
    return (res * sign);
}
