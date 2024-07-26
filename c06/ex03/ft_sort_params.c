/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:00:36 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/17 23:00:36 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Fonction de comparaison pour le tri à bulles
int	compare(const char *a, const char *b)
{
	while (*a && *b && *a == *b)
	{
		a++;
		b++;
	}
	return ((*(unsigned char *)a) - (*(unsigned char *)b));
}

// Fonction de tri à bulles
void	bubble_sort(char *arr[], int n)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (compare(arr[j], arr[j + 1]) > 0)
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// Fonction d'affichage
void	write_string(const char *str)
{
	while (*str)
		write(STDOUT_FILENO, str++, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc < 2)
		return (1);
	bubble_sort(argv + 1, argc - 1);
	while (i < argc)
	{
		write_string(argv[i]);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}
