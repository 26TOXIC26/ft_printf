/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:14:58 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/30 21:11:59 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_l(size_t nb, int *sum)
{
    char    *hex;

    hex ="0123456789abcdef";
	if (nb < 16)
        ft_putchar_l(hex[nb % 16], sum);
    else
    {
        ft_puthex_l(nb / 16, sum);
        ft_putchar_l(hex[nb % 16], sum);
    }
}
