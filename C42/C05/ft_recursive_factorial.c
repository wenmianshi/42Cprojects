int ft_recursive_factorial(int nb)
{
    if (nb < 0)
    { 
        return (0);
    }
    else if (nb == 0)
    {
        return (1);
    }
    else
    {
        return (nb * ft_recursive_factorial(nb-1));
    }
}

/* #include <stdio.h>

int main()
{
    int num = 1;
    printf("%d", ft_recursive_factorial(num));
} */