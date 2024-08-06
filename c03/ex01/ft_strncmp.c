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

// Function to compare up to `n` characters of two strings
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((n > 0) && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}
