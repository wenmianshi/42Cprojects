
int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb > 0)
	{
		while (sqrt * sqrt <= nb)
		{
			if (sqrt * sqrt == nb)
            {
                return (sqrt);
            }
			sqrt++;
		}
	}
	return (0);
}

/*#include <stdio.h>

int main()
{
    int num = 4;
    printf("%d", ft_sqrt(num));
} */