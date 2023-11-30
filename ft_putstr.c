/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:36:05 by amousaid          #+#    #+#             */
/*   Updated: 2023/11/30 18:12:23 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_l(char *s, int *sum)
{
	int	i;

	i = 0;
	if (!s)
		s = "(null)";
	
	while (s[i])
	{
		ft_putchar_l(s[i], sum);
		i++;
	}
}