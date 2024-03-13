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

int ft_atoi(char *str);
void ft_is_negative(int *sign);
void ft_isspace(char *str, int *pos);
void ft_sign(char *str, int *pos, int *sign);
void ft_result(char *str, int *pos, int *result);


#endif