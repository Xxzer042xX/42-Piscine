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
# define FT_H

int    ft_is_valid_base(char *base);
int    ft_in_base(char c, char *base);
void    ft_prepare_str(char **str, int *sign);
int    ft_atoi_base(char *str, char *base);

#endif

