/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 23:47:14 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/07/24 23:47:14 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// Fonction pour écrire une combinaison et le séparateur
void	write_comb(char *str, int n, int is_last)
{
	write (1, str, n);
	if (!is_last)
		write(1, ", ", 2);
}

// Fonction pour vérifier si la combinaison actuelle est la dernière
int	is_last_comb(char *str, int n)
{
	return (str[0] == '9' - n + 1);
}

void	ft_print_combn(int n)
{
	char str[n + 1];
	int stack[n];
	int pos;
	int nbr;

	str[n] = '\0';
	pos = 0;
	nbr = '0';
	if (n < 1 || n > 9)
		return ;
	while (1)
	{
		if (pos == n)
		{
			write_comb(str, n, is_last_comb(str, n));
			if (pos == 0)
				break ;
			pos--;
			nbr = stack[pos] + 1;
		}
		else if (nbr <= '9')
		{
			str[pos] = nbr;
			stack[pos] = nbr;
			pos++;
			nbr++;
		}
		else
		{
			if (pos == 0)
				break ;
			pos--;
			nbr = stack[pos] + 1;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_combn(atoi(argv[1]));
	return (0);
}
