/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:25:53 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/12/05 19:25:53 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
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





int	*creat_array(char *str)
{
	
}

int main(int ac, char **av)
{
	int	i;

	i = 0;
    if (ac != 7)
    {
        printf("Please provide 6 numbers as arguments.\n");
        return (0);
    }
	while(av[i])
	{
    	int arr[6];
    arr[0] = atoi(av[1]);
    arr[1] = atoi(av[2]);
    arr[2] = atoi(av[3]);
    arr[3] = atoi(av[4]);
    arr[4] = atoi(av[5]);
    arr[5] = atoi(av[6]);
    ft_sort_int_tab(arr, 6);
    printf("%d, %d, %d, %d, %d, %d\n", arr[0], 
    arr[1], arr[2], arr[3], arr[4], arr[5]);

    return (0);
}
