/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:02:08 by weshi             #+#    #+#             */
/*   Updated: 2024/01/24 21:40:34 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//#include <stdio.h>
//int main(void)
//{
//	char	string1[]="";
//	char	string2[]="abcde";
//	char	*string3;

//	string3 = ft_strcpy(string1, string2);
//	printf("%s", string1);
//}
