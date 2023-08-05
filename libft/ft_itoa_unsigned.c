/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:59:21 by memam             #+#    #+#             */
/*   Updated: 2022/07/11 22:04:57 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_len(unsigned int n)
{
	size_t	count_len;

	count_len = 0;
	if (n == 0)
		count_len++;
	while (n > 0)
	{
		n /= 10;
		count_len++;
	}
	return (count_len);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char	*dst;
	size_t	len;

	len = ft_count_len(n);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	if (n == 0)
		dst[0] = '0';
	while (n > 0)
	{
		dst[len - 1] = 48 + (n % 10);
		n /= 10;
		len--;
	}
	return (dst);
}
