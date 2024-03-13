/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:16:13 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/10 13:16:13 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int     main(void)
{
    ft_putnbr_base(42, "0123456789");
    write(1, "\n", 1);
    ft_putnbr_base(-42, "01");
    write(1, "\n", 1);
    ft_putnbr_base(42, "0123456789ABCDEF");
    write(1, "\n", 1);
    ft_putnbr_base(42, "poneyvif");
    return (0);
}
