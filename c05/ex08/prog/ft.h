/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:16:21 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/10 13:16:21 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
#define FT_H

void    ft_putchar(char c);
int     is_safe(int board[10], int row, int col);
void    solve(int board[10], int col, int *solutions);
void    ft_ten_queens_puzzle(void);

#endif
