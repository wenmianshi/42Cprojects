/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);*/

int	ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
	int sign = 1;
    while (str[i] == ' '
		|| str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {
        i += 1;
    }
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
	{
		i++;
	}
    while (str[i] != 0)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            res = res*10 + str[i] - '0';
            i++;
        }
		else
		{
			break;
		}
    }
    return res * sign;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "\t \v \r \f \n +2147a483648";
    printf("%d", ft_atoi(str));
    printf("\n%d", atoi(str));
}
