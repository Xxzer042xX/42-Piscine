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

// function to swap the strings
void    swap(char **a, char **b)
{
    char *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

//function to compare the strings
int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        if(s1[i] == '\0' && s2[i] == '\0')
           return (0);
        i++;
    }
    return (s1[i] - s2[i]);
}
// Function to sort the strings
void    bubble_sort(char **arr, int n)
{
    int     i;
    int     j;
    int     swapped;

    i = 0;
    while (i < n - 1)
    {
        swapped = 0;
        j = 0;
        while (j < n - i - 1)
        {
            if (ft_strcmp(arr[j], arr[j + 1]) > 0)
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
            j++;
        }
        if (swapped == 0)
            break;
        i++;
    }
}

// print the string
void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    int i;
    char *arr[ac];
 
    i = 0;
    while(i < ac)
    {
        arr[i] = av[i];
        i++;
    }
    bubble_sort(arr, ac);

    while (i < ac)
    {
        ft_putstr(arr[i]);
        i++;
    }
    return (0);
}
