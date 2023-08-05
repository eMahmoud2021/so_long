/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:42:06 by memam             #+#    #+#             */
/*   Updated: 2022/07/11 22:07:39 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_flag(char c)
{
	if (c == '+' || c == '-' || c == '0' || c == ' ' || c == '#')
		return (1);
	return (0);
}

void	ft_add_flags(t_flags *flags, char c)
{
	if (c == '+')
		flags->plus = 1;
	else if (c == '-')
		flags->minus = 1;
	else if (c == '0')
		flags->zero = 1;
	else if (c == ' ')
		flags->space = 1;
	else if (c == '#')
		flags->sharp = 1;
}
