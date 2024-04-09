/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 23:49:54 by weshi             #+#    #+#             */
/*   Updated: 2024/01/24 15:20:18 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char	*src)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	y = 0;
	while (src[y] != '\0')
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
//	char	destination[15] = "Hao";
//	char	source[] = "yuan";
//	printf("%s", ft_strcat(destination, source));
//}
