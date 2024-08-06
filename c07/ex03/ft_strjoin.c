/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:11:53 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/04/03 18:11:53 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Function to compute the length of a string
int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

// Function to copy a string from src to dest
void	ft_strcpy(char *dest, const char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

/*Function to calculate the total length required
to store the concatenated string*/
int	calculate_total_length(int size, char **strs, int sep_len)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += sep_len * (size - 1) + 1;
	return (total_len);
}

/*Function to join an array of strings with a separator
and store the result in `join`*/
char	*join_strings(int size, char **strs, char *sep, char *join)
{
	char	*current_pos;
	int		i;

	current_pos = join;
	i = 0;
	while (i < size)
	{
		ft_strcpy(current_pos, strs[i]);
		current_pos += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(current_pos, sep);
			current_pos += ft_strlen(sep);
		}
		i++;
	}
	return (join);
}

// Helper function to calculate the total length needed for the joined string
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		sep_len;
	int		total_len;

	if (size == 0)
	{
		join = malloc(1);
		if (!join)
			return (NULL);
		*join = '\0';
		return (join);
	}
	sep_len = ft_strlen(sep);
	total_len = calculate_total_length(size, strs, sep_len);
	join = malloc(total_len);
	if (!join)
		return (NULL);
	return (join_strings(size, strs, sep, join));
}
