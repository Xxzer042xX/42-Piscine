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

//Swap the value of two pointers with help of a temporary variable
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int *start;
	int *end;

	start = tab;
	end = tab + (size -1);
	if (size <= 1)
		return;
	while (start < end)
	{
		if (*start > *(start + 1))
			ft_swap(start, start + 1);
		start++;
	}
	ft_sort_int_tab(tab, size - 1);
}

/*
//Sort an array of integers in ascending order
void ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	//verifie len de tab
    if (size <= 1)
        return;
	//parcour le tab pour evaluer < || >
    while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
            ft_swap(&tab[i], &tab[i + 1]);
		i++;
    }
	//appel recursif 
    ft_sort_int_tab(tab, size - 1);
}
*/