/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:41:35 by memam             #+#    #+#             */
/*   Updated: 2022/07/11 22:01:43 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	size_t	cur_size;
	char	*new_ptr;

	if (!ptr)
		return (malloc(size));
	cur_size = sizeof(ptr);
	if (size <= cur_size)
		return (ptr);
	new_ptr = malloc(size);
	ft_memcpy(ptr, new_ptr, cur_size);
	free(ptr);
	return (new_ptr);
}
