/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:58:33 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/29 11:58:33 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    i_love_recursive(char *str, int n, int pos);

void    ft_print_combn(int n)
{
    char str[10];

    if (n > 0 && n < 10)
        i_love_recursive(str, n, 0);
}
