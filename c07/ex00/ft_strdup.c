/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:37:34 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/31 20:37:34 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Copies the string given as argument into a new string.
char	*ft_strdup(char *src)
{
	char	*p_dest;
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	p_dest = dest;
	if (!dest)
		return (NULL);
	while (*src)
		*p_dest++ = *src++;
	*p_dest = '\0';
	return (dest);
}
