/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 23:49:50 by weshi             #+#    #+#             */
/*   Updated: 2024/01/24 18:52:52 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && i < (n - 1))
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
//#include <stdio.h>

//int	main(void)
//{
//	char			s1[] = "1234";
//	char			s2[] = "121";
//	unsigned int	number;

//	number = 3;
//	printf("%d", ft_strncmp(s1, s2, number));
//}
