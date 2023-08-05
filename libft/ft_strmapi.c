/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:57:18 by memam             #+#    #+#             */
/*   Updated: 2022/07/11 22:00:03 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*map;

	if (!s)
		return (NULL);
	i = 0;
	map = ft_strdup(s);
	if (!map)
		return (NULL);
	while (map[i])
	{
		map[i] = f(i, map[i]);
		i++;
	}
	return (map);
}
