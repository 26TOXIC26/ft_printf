/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:36:36 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/30 21:12:47 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <fcntl.h>
# include <limits.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int ft_printf(const char *format, ...);
void    ft_putchar_l(char c, int *sum);
void    ft_putnbr_l(int n, int *sum);
void    ft_putstr_l(char *s, int *sum);
void    ft_puthex_l(size_t nb, int *sum);
void    ft_putHex_l(size_t nb, int *sum);
void    ft_putunbr_l(unsigned int n, int *sum);


#endif