/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:02:15 by weshi             #+#    #+#             */
/*   Updated: 2024/01/24 22:01:17 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char	destination[13];
//	char	source[] = "Miaaaaaaa";
//	unsigned int	num;
//	char	*temp_value_storage;

//	num = 5;
//	temp_value_storage = ft_strncpy(destination, source, num);
//	printf("%s,", temp_value_storage);

//	char	destination1[13];
//	char	source1[] = "Miaaaaaaa";
//	//char	temp1_value_storage[13];
//	printf("%s", strncpy(destination1, source1, num));
//}
