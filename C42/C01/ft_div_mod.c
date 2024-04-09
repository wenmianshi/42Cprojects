/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 03:39:59 by weshi             #+#    #+#             */
/*   Updated: 2024/01/22 22:34:58 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//#include <stdio.h>
//int main(void)
//{
//	int	a;
//	int	b;
//	int	div;
//	int	mod;

//	a = 8;
//	b = 2;
//	div = 0;
//	mod = 0;
//	ft_div_mod(a, b, &div, &mod);
//	printf("%d", mod);
//	printf("\n%d", div);
//}
