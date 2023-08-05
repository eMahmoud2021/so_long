/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:39:52 by memam             #+#    #+#             */
/*   Updated: 2022/07/11 22:03:58 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem_zone;

	mem_zone = (void *)malloc(size);
	if (!mem_zone)
		return (NULL);
	ft_bzero(mem_zone, size);
	return (mem_zone);
}
