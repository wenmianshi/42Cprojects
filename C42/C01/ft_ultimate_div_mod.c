/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 03:46:01 by weshi             #+#    #+#             */
/*   Updated: 2024/01/22 22:35:49 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		i;

	i = *a;
	*a = i / *b;
	*b = i % *b;
}
//#include <stdio.h>

//int main(void)
//{
//	int		a;
//	int		b;

//	a = 10;
//	b = 3;
//	ft_ultimate_div_mod(&a, &b);
//	printf("%d", a);
//	printf("\n%d", b);
//}
