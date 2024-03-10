/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:14:15 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:14:15 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int main(void)
{
    char s1[] = "abdepjfejjf";
    char s2[] = "abcepjfejjf";
    printf("%d\n", ft_strncmp(s1, s2, 3));
    return (0);
}
