
int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 0;
	if (nb < 2)
    {
        return (0);
    }
	if (nb == i)
    {
        return (1);
    }
	while (i <= nb / 2)
	{
		if (nb % i == 0)
        {
            prime++;
        }
		i++;
	}
	if (prime == 0)
    {
        return (1);
    }
	else
    {
        return (0);
    }
}

/*#include <stdio.h>

int main()
{
    int num = 7;
    printf("%d", ft_is_prime(num));
} */