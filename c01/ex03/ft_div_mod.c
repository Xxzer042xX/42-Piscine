/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 03:07:42 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/19 03:07:42 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Assign the result of the division of a by b to the int pointed by div
//Assign the result of the modulo of a by b to the int pointed by mod
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
