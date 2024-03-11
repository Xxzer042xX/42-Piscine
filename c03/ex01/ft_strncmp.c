/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:14:58 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:14:58 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compares to strings to a maximum of n characters and returns the difference between the first two different characters
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n && s1[i] == s2[i])
        i++;
    if (i == n)
        return (0);
    return (s1[i] - s2[i]);
}
