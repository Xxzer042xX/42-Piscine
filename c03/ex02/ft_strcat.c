/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:33:35 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:33:35 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatenates src to dest and returns dest
char	*ft_strcat(char *dest, char *src)
{
	char	*s;
	char	*d;

	s = src;
	d = dest;
	while (*d)
		d++;
	while (*s)
		*d++ = *s++;
	*d = '\0';
	return (dest);
}
