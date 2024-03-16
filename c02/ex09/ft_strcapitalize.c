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

/*Capitalizes the first letter of each word in a string, and returns the string.
if other charcater is uppercase, it will be converted to lowercase
*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
    
    //if th firste character is a lowercase, it will be converted to uppercase
	if (str[i] != '\0' && (str[i] >= 'a' && str[i] <= 'z'))
		str[i] = str[i] - 32;
	i += 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			// Convert to uppercase if the previous character is not a letter or a number
			if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z') || (str[i - 1] >= '0' && str[i - 1] <= '9')))
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			// Convert to lowercase if the previous character is a letter or a number
			if ((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z') || (str[i - 1] >= '0' && str[i - 1] <= '9'))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
