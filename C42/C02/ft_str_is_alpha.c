/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:02:19 by weshi             #+#    #+#             */
/*   Updated: 2024/01/23 20:48:24 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a') && (str[i] <= 'z'))
			|| ((str[i] >= 'A') && (str[i] <= 'Z')))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
//#include <stdio.h>
//int main(void)
//{
//	char string[] = "Mia is coding at 42.";
//	printf("%d", ft_str_is_alpha(string));
//}
