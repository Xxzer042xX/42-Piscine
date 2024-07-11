/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:56:00 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/07/11 20:56:00 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	is_top_left_or_bottom_right_corner(int column, int row, int x, int y)
{
	return (column == 0 && row == 0 || column == x - 1 && row == y - 1);
}

int	is_top_right_or_bottom_left_corner(int column, int row, int x, int y)
{
	return (column == 0 && row == y - 1 || column == x - 1 && row == 0);
}

int	is_border(int row, int column, int y, int x)
{
	return (row == 0 || column == 0 || row == y - 1 || column == x - 1);
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
			if (is_top_left_or_bottom_right_corner(column, row, x, y))
				ft_putchar('/');
			else if (is_top_right_or_bottom_left_corner(column, row, x, y))
				ft_putchar('\\');
			else if (is_border(row, column, y, x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
