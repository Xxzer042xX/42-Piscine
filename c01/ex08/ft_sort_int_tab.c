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

//Sort an array of integers in ascending order
void ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
    // Base case: If the array size is 1 or less, it's already sorted.
    if (size <= 1)
        return;
    // Iterate through the first size-1 elements
    while (i < size - 1)
	{   // If the current element is greater than the next element, swap them
		if (tab[i] > tab[i + 1])
            ft_swap(&tab[i], &tab[i + 1]);
		i++;
    }
    ft_sort_int_tab(tab, size - 1);
}


