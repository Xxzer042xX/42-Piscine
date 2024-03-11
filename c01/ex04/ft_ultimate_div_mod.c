/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 03:33:01 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/19 03:33:01 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*Assign the result of the division of a by b to the int pointed by a with help of a temporary variable,
assign the result of the modulo of a by b to the int pointed by b with help of a temporary variable
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = temp_a / *b;
	*b = temp_a % *b;
}
