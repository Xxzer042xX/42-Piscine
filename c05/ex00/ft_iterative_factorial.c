/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:11:38 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/13 14:11:38 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Calculates the factorial of a number
int ft_iterative_factorial(int nb)
{
    int i;
    int result;

    i = 1;// The factorial of 0 is 1
    result = 1;// The result of a factorial is always 1
    if (nb < 0)
        return (0);
    while (i <= nb)
    {
        result *= i;
        i++;
    }
    return (result);
}

