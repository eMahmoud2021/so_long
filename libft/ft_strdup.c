/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:50:48 by memam             #+#    #+#             */
/*   Updated: 2022/07/11 22:00:47 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, ft_strlen(s1) + 1);
	return (dst);
}
