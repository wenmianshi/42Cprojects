/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:27:22 by weshi             #+#    #+#             */
/*   Updated: 2024/01/29 18:31:25 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
//#include <stdio.h>
//int main(void)
//{
//	char string[] = "Miaaa";
//	int result = ft_strlen(string);
//	printf("%d", result);
//}
