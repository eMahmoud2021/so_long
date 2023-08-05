/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:58:38 by memam             #+#    #+#             */
/*   Updated: 2022/07/11 22:07:33 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atol(const char *str)
{
	size_t		i;
	int			neg;
	long int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		neg = -neg;
		i++;
	}
	while (str[i] && ((str[i] >= '0') && (str[i] <= '9')))
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * neg);
}
