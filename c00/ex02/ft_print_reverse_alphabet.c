/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:50:49 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/23 23:50:49 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Display the alphabet in lowercase from 'z' to 'a'
void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 123;
	while (--letter >= 'a')
		write(1, &letter, 1);
}
