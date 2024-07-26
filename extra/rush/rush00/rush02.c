/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:56:27 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/07/11 20:56:27 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	is_top_corner(int column, int row, int x)
{
	return (row == 0 && (column == 0 || column == x - 1));
}

int	is_border(int column, int row, int x, int y)
{
	return (column == 0 || column == x - 1 || row == 0 || row == y - 1);
}

int	is_bottom_corner(int column, int row, int x, int y)
{
	return (column == 0 && row == y - 1 || column == x - 1 && row == y - 1);
}

void	rush(int x, int y)
{
	int	column;
	int	row;

	row = 0;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			if (is_top_corner(column, row, x))
				ft_putchar('A');
			else if (is_border(column, row, x, y))
				ft_putchar('B');
			else if (is_bottom_corner(column, row, x, y))
				ft_putchar('C');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
