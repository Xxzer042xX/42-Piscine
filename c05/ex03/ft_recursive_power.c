/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:33:43 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/17 01:33:43 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns the result of nb raised to the power of power with a recursive function
int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    return (nb * ft_recursive_power(nb, power - 1));
}
