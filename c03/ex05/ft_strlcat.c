/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:52:09 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:52:09 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Count the number of characters in a string
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// Concatenate two strings with gestions of buffer size
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l_dest;
	unsigned int	l_src;
	unsigned int	i;

	l_dest = ft_strlen(dest);
	l_src = ft_strlen(src);
	i = 0;
	if (size <= l_dest)
		return (size + l_src);
	while (src[i] != '\0' && (l_dest + i) < (size - 1))
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (l_dest + l_src);
}
