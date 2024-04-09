/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weshi <weshi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:51:05 by weshi             #+#    #+#             */
/*   Updated: 2024/01/19 19:32:03 by weshi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	single_alphabet;

	single_alphabet = 'a';
	while (single_alphabet <= 'z')
	{
		write(1, &single_alphabet, 1);
		single_alphabet++;
	}
}
