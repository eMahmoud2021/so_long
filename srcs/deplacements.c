/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deplacements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:57:03 by memam             #+#    #+#             */
/*   Updated: 2022/07/14 20:57:03 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/my_game.h"

static void	change_player_img(t_param *param, char c)
{
	mlx_clear_window(param->mlx, param->mlx_win);
	mlx_destroy_image(param->mlx, param->player);
	if (c == 'u')
		put_image(param, &param->player, "./images/player_down.xpm");
	if (c == 'r')
		put_image(param, &param->player, "./images/player_right.xpm");
	if (c == 'l')
		put_image(param, &param->player, "./images/player_left.xpm");
	if (c == 'd')
		put_image(param, &param->player, "./images/player_front.xpm");
}

int	move_up(t_param *param)
{
	int	x;
	int	y;

	param->player_y--;
	x = param->player_x;
	y = param->player_y;
	change_player_img(param, 'u');
	if (param->map[y][x] == '0' || param->map[y][x] == 'C')
	{
		if (param->map[y][x] == 'C')
			param->c--;
		param->map[y][x] = 'P';
		param->map[y + 1][x] = '0';
		init_map(param);
		return (1);
	}
	sortie_exit(param);
	enn_exit(param);
	param->player_y++;
	init_map(param);
	return (0);
}

int	move_down(t_param *param)
{
	int	x;
	int	y;

	param->player_y++;
	x = param->player_x;
	y = param->player_y;
	change_player_img(param, 'd');
	if (param->map[y][x] == '0' || param->map[y][x] == 'C')
	{
		if (param->map[y][x] == 'C')
			param->c--;
		param->map[y][x] = 'P';
		param->map[y - 1][x] = '0';
		init_map(param);
		return (1);
	}
	sortie_exit(param);
	enn_exit(param);
	param->player_y--;
	init_map(param);
	return (0);
}

int	move_left(t_param *param)
{
	int	x;
	int	y;

	param->player_x--;
	x = param->player_x;
	y = param->player_y;
	change_player_img(param, 'l');
	if (param->map[y][x] == '0' || param->map[y][x] == 'C')
	{
		if (param->map[y][x] == 'C')
			param->c--;
		param->map[y][x] = 'P';
		param->map[y][x + 1] = '0';
		init_map(param);
		return (1);
	}
	sortie_exit(param);
	enn_exit(param);
	param->player_x++;
	init_map(param);
	return (0);
}

int	move_right(t_param *param)
{
	int	x;
	int	y;

	param->player_x++;
	x = param->player_x;
	y = param->player_y;
	change_player_img(param, 'r');
	if (param->map[y][x] == '0' || param->map[y][x] == 'C')
	{
		if (param->map[y][x] == 'C')
			param->c--;
		param->map[y][x] = 'P';
		param->map[y][x - 1] = '0';
		init_map(param);
		return (1);
	}
	sortie_exit(param);
	enn_exit(param);
	param->player_x--;
	init_map(param);
	return (0);
}
