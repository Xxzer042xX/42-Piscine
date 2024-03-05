/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:38:18 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/29 12:38:19 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_sort_in_tab(int *tab, int size)
{
	int	start;
	int	pos;

	start = 0;
	while (tab[start] != size - 1) // Itère sur chaque élément du tableau
	{
		pos = 0;
		while (tab[pos] != size - start - 1) // Passe sur le tableau jusqu'à l'élément non trié
		{
			if (tab[start] > tab[pos]) // Compare les éléments adjacents
			{
				ft_swap(&tab[start], &tab[pos]); // Échange si nécessaire
			}
			pos++;
		}
		start++;
	}
}
