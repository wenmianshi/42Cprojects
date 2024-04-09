int ft_recursive_power(int nb, int power)
{
    int res;

    res = nb;
    if (power < 0)
    {
        return (0);
    }
    else if (power == 0)
    {
        return (1);
    }
    else if (power > 0)
    {
        return res*ft_recursive_power(nb, power-1);
    }   
    else
    {
        return res;
    }
}

/* #include <stdio.h>

int main()
{
    int num = 2;
    int pow = 4;
    printf("%d", ft_recursive_power(num, pow));
} */