/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:09:57 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 08:09:57 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
#define FT_H
#include <unistd.h>

void print_line_content(unsigned char *addr, size_t size);
void *ft_print_memory(void *addr, unsigned int size);
void print_address(unsigned long long addr);
void print_hex(unsigned char c);
void ft_putstr(char *str, int len);
void ft_putchar(char c);

#endif
