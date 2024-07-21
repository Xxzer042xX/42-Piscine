/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:49:03 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 14:49:03 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Searches for the first occurrence
char	*ft_strstr(char *str, char *to_find)
{
	char	*p_str;
	char	*p_to_find;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		p_str = str;
		p_to_find = to_find;
		while (*p_str && *p_to_find && *p_str == *p_to_find)
		{
			p_str++;
			p_to_find++;
		}
		if (*p_to_find == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
