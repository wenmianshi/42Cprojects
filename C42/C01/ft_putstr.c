/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:55:27 by weshi             #+#    #+#             */
/*   Updated: 2024/01/22 22:36:46 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

//int	main(void)
//{
//	// either use: char	string_of_numbers[8] = "0123456";
//	//or use the following:
//	char	*string_of_numbers;

//	string_of_numbers = "0123456";
//	ft_putstr(string_of_numbers);
//}
