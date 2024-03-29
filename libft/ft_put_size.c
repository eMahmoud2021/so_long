/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:44:41 by memam             #+#    #+#             */
/*   Updated: 2022/07/11 22:03:03 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_int(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putchar_size(char c)
{
	ft_putchar(c);
	return (1);
}

int	ft_putstr_size(const char *s)
{
	if (!s)
		return (0);
	ft_putstr(s);
	return (ft_strlen_int(s));
}
