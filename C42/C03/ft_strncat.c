/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:33:11 by weshi             #+#    #+#             */
/*   Updated: 2024/01/24 15:21:35 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	y = 0;
	while (src[y] != '\0' && y < nb)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
//#include <stdio.h>
//int main(void)
//{
//	char	destination[25] = "Hao";
//	char	source[] = "yuan is so cute";
//	unsigned int	number;
//	number = 8;
//	printf("%s", ft_strncat(destination, source, number));
//}
