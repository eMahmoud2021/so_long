/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:39:37 by memam             #+#    #+#             */
/*   Updated: 2022/07/11 22:06:15 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_free_tab(char **split, size_t len)
{
	size_t	i;

	i = 0;
	while (split[i] && i < len)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (-1);
}
