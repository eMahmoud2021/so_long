/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:54:09 by memam             #+#    #+#             */
/*   Updated: 2022/07/11 21:59:31 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_str;

	new_str = (char *)ft_memalloc(sizeof(char) * (size + 1));
	if (!new_str)
		return (NULL);
	return (new_str);
}
