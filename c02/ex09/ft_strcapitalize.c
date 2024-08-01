/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:27:39 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 00:27:39 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char	*ft_strcapitalize(char *str)
{
	char	*orig;

	orig = str;
	if (*str && (*str >= 'a' && *str <= 'z'))
		*str -= 32;
	str++;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (!((*(str - 1) >= 'a' && *(str - 1) <= 'z') || \
				(*(str - 1) >= 'A' && *(str - 1) <= 'Z') || \
				(*(str - 1) >= '0' && *(str - 1) <= '9')))
				*str -= 32;
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			if ((*(str - 1) >= 'a' && *(str - 1) <= 'z') || \
				(*(str - 1) >= 'A' && *(str - 1) <= 'Z') || \
				(*(str - 1) >= '0' && *(str - 1) <= '9'))
				*str += 32;
		}
		str++;
	}
	return (orig);
}
*/

char	*ft_strcapitalize(char *str)
{
	char	*orig;
	int		new_word;

	orig = str;
	new_word = 1;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (new_word)
				*str -= 32;
			new_word = 0;
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			if (!new_word)
				*str += 32;
			new_word = 0;
		}
		else if (*str >= '0' && *str <= '9')
		{
			new_word = 0;
		}
		else
		{
			new_word = 1;
		}
		str++;
	}
	return (orig);
}
