/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:42:24 by memam             #+#    #+#             */
/*   Updated: 2022/07/11 22:07:11 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_conv_char(int c, t_opts opts)
{
	int	len;

	len = 1;
	while (opts.wdt > 1 && !opts.flags.minus)
	{
		ft_putchar(' ');
		opts.wdt--;
		len++;
	}
	ft_putchar(c);
	while (opts.wdt > 1 && opts.flags.minus)
	{
		ft_putchar(' ');
		opts.wdt--;
		len++;
	}
	return (len);
}
