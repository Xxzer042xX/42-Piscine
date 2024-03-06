/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:38:18 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/29 12:38:19 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Fonction pour échanger deux entiers
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// Fonction pour trier un tableau d'entiers par ordre croissant
void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	pos;

	start = 0;
	while (start < size - 1) // Itère sur chaque élément du tableau
	{
		pos = 0;
		while (pos < size - start - 1)
		{
			if (tab[pos] > tab[pos + 1])
			{
				ft_swap(&tab[pos], &tab[pos + 1]);
			}
			pos++;
		}
		start++;
	}
}

