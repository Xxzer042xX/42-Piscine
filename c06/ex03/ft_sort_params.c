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

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

// Fonction pour échanger les pointeurs de deux chaînes
void    swap(char **a, char **b)
{
    char *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

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
// Fonction de tri à bulles pour trier le tableau de chaînes
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

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}

// Fonction principale pour démontrer le tri du tableau de chaînes
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

    // Affichage du tableau trié
    while (i < ac)
    {
        ft_putstr(arr[i]);
        i++;
    }
    return (0);
}
