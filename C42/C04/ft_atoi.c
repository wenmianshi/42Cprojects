/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:27:35 by weshi             #+#    #+#             */
/*   Updated: 2024/01/29 22:03:01 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ten_power(unsigned int exponent)
{
	int				base;
	unsigned int	i;

	base = 1;
	i = 0;
	while (i < exponent)
	{
		base *= 10;
		i++;
	}
	return (base);
}

int	sum_(unsigned int j, char *str, int digit_count, int minus_count)
{
	int	sum;

	sum = 0;
	while (str[j] >= '0' && str[j] <= '9')
	{
		sum += (str[j] - 48) * ten_power(digit_count - 1);
		j++;
		digit_count--;
	}
	if (minus_count % 2 == 1)
		sum *= -1;
	return (sum);
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	minus_count;
	unsigned int	digit_count;

	i = 0;
	while (str[i] == ' ')
		i++;
	minus_count = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	digit_count = 0;
	j = i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
		digit_count++;
	}
	return (sum_(j, str, digit_count, minus_count));
}

#include <stdio.h>

int	main(void)
{
	char	string[] = "  -+-2147483647";
	printf("%d", ft_atoi(string));
}
