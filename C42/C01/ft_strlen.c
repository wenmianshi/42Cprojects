/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:55:49 by weshi             #+#    #+#             */
/*   Updated: 2024/01/22 22:39:00 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//#include <stdio.h>
//int main(void)
//{
//	char	*array_pointer;
//	int		length;

//	array_pointer = "abcde";
//	length = ft_strlen(array_pointer);
//	printf("Length of the string: %s is %d", array_pointer, length);
//}
