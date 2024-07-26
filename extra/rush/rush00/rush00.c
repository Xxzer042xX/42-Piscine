/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:37:42 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/07/11 19:37:42 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int is_corner(int column, int row, int x, int y)
{
    return (column == 0 || column == x - 1) && (row == 0 || row == y - 1);
}

int	is_vertical_border(int column, int x)
{
	return (column == 0 || column == x - 1);
}

int	is_horizontal_border(int row, int y)
{
	return (row == 0 || row == y - 1);
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
			if (is_corner(column, row, x, y))
				ft_putchar('o');
			else if (is_vertical_border(column, x))
				ft_putchar('|');
			else if (is_horizontal_border(row, y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
