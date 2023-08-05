/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:59:06 by memam             #+#    #+#             */
/*   Updated: 2022/07/11 22:05:06 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_len(unsigned long n)
{
	size_t	count_len;

	count_len = 0;
	if (n == 0)
		count_len++;
	while (n > 0)
	{
		n /= 16;
		count_len++;
	}
	return (count_len);
}

char	*ft_itoa_ptr(unsigned long n)
{
	char	*index;
	char	*dst;
	size_t	len;

	index = "0123456789abcdef";
	len = ft_count_len(n);
	dst = (char *)malloc(sizeof(char) * (2 + len + 1));
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	if (n == 0)
		dst[0] = '0';
	while (n > 0)
	{
		dst[len - 1] = index[n % 16];
		n /= 16;
		len--;
	}
	return (dst);
}
