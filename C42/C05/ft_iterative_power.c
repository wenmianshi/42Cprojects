int ft_iterative_power(int nb, int power)
{
    int res;
    if (power < 0)
    {
        return (0);
    }
    if (nb == 0 && power == 0)
    {
        return (1);
    }
    res = 1;
    while (nb != 0 && power > 0)
    {
        res *= nb;
        power--;
    }
    return (res);
}

/*#include <stdio.h>

int main()
{
    int num = 2;
    int pow = 4;
    printf("%d", ft_iterative_power(num, pow));
} */