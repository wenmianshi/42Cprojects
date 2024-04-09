/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:27:30 by weshi             #+#    #+#             */
/*   Updated: 2024/01/29 18:23:11 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		nb += 48;
		write(1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
//int main(void)
//{
//	int number = -120;
//	ft_putnbr(number);
//	write(1, "\n", 1);
//	int number1 = 4867486;
//	ft_putnbr(number1);
//	write(1, "\n", 1);
//	int number2 = 4;
//	ft_putnbr(number2);
//	write(1, "\n", 1);
//}
