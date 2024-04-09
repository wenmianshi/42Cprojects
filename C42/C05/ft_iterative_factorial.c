int ft_iterative_factorial(int nb)
{
    int res;

    if (nb < 0)
    {
        return (0);
    }
    else 
    {
        res = 1;
        while (nb >= 1)
        {
            res *= nb;
            nb--;
        }
        return (res);
    }
}

/*#include <stdio.h>

int main()
{
    int num = 3;
    printf("%d", ft_iterative_factorial(num));
} */