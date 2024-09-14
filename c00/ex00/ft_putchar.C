/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.C                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:26:11 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/23 20:26:11 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Display a character on standard output.
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int main(void)
{
    ft_putchar('Z');
    ft_putchar('\n');
    return (0);
}
*/