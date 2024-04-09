/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:04:45 by weshi             #+#    #+#             */
/*   Updated: 2024/01/19 19:31:58 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	single_alph;

	single_alph = 'z';
	while (single_alph >= 'a')
	{
		write(1, &single_alph, 1);
		single_alph--;
	}
}
