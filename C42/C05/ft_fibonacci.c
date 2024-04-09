
int	ft_fibonacci(int index)
{
	int	value;

	if (index < 0)
    {
        return (-1);
    }
	else if (index == 0)
    {
        return (0);
    }
	else if (index == 1)
    {
        return (1);
    }
	else
	{
		value = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (value);
	}
}

/*#include <stdio.h>

int main()
{
    int index = 3;
    printf("%d", ft_iterative_factorial(index));
} */