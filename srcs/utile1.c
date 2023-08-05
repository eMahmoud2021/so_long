/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utile1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:38:27 by memam             #+#    #+#             */
/*   Updated: 2022/07/26 09:16:57 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/my_game.h"

int	sortie_exit(t_param *param)
{
	int		y;
	int		x;

	y = param->player_y;
	x = param->player_x;
	if (param->map[y][x] == 'E' && param->c == 0)
	{
		param->map[y][x + 1] = '0';
		param->success = 1;
		free_all_exit(param);
	}
	return (0);
}
