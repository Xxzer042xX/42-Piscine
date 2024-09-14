/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 12:10:36 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/08/30 14:59:16 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}	

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_bubble_sort(char *av[], int ac)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = 1;
		while ((i + j) < ac)
		{
			if (ft_strcmp(av[i], av[i + j]) > 0)
				ft_swap(&av[i], &av[i + j]);
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 2)
	{
		ft_bubble_sort(av + 1, ac - 1);
		while (*(++av))
			ft_putstr(*av);
	}
	else if (ac == 2)
		ft_putstr(*(++av));
	return (0);
}
