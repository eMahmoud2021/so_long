/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_init_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:03:24 by memam             #+#    #+#             */
/*   Updated: 2022/07/25 13:04:56 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/my_game.h"

int	init_map_a(t_param *param)
{
	int	i;
	int	j;

	j = -1;
	while (param->map[++j])
	{
		i = -1;
		while (param->map[j][++i])
		{
			if (param->map[j][i] == 'E')
				init_item(param, param->porte, i, j);
			if (param->map[j][i] == '1')
				init_item(param, param->wall, i, j);
			if (param->map[j][i] == 'C')
				init_item(param, param->collectible, i, j);
			if (param->map[j][i] == 'P')
				init_item(param, param->player, i, j);
			if (param->map[j][i] == '0')
				init_item(param, param->ground, i, j);
		}
	}
	return (0);
}

int	init_map_b(t_param *param)
{
	int	i;
	int	j;

	j = -1;
	while (param->map[++j])
	{
		i = -1;
		while (param->map[j][++i])
		{
			if (param->map[j][i] == 'B')
				init_item(param, param->ennemie_a, i, j);
			if (param->map[j][i] == 'G')
				init_item(param, param->ennemie_b, i, j);
			if (param->map[j][i] == 'R')
				init_item(param, param->ennemie_e, i, j);
			if (param->map[j][i] == 'Y')
				init_item(param, param->ennemie_y, i, j);
		}
	}
	return (0);
}

int	put_score(t_param *param)
{
	param->mlx_string = mlx_string_put(param->mlx, param->mlx_win,
			20, 20, 0xfffaf0, "YOUR SCORE : ");
	param->mlx_string = mlx_string_put(param->mlx, param->mlx_win,
			110, 20, 0xfffaf0, ft_itoa(param->count));
	return (0);
}

void	check_char_enn(t_param *param)
{
	int	i;
	int	j;

	i = -1;
	while (param->map[++i])
	{
		j = -1;
		while (param->map[i][++j])
		{
			if (param->map[i][j] == 'B')
				param->b++;
			if (param->map[i][j] == 'G')
				param->g++;
			if (param->map[i][j] == 'R')
				param->r++;
			if (param->map[i][j] == 'Y')
				param->y++;
		}
	}
}

void	enn_exit(t_param *param)
{
	int		y;
	int		x;

	x = param->player_x;
	y = param->player_y;
	if (param->map[y][x] == 'G' || param->map[y][x] == 'B' || param->map[y][x]
		== 'Y' || param->map[y][x] == 'R')
	{
		param->map[y - 1][x] = 'P';
		param->fail = 1;
		free_all_exit(param);
	}
}
