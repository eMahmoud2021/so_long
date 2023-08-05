/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:48:51 by memam             #+#    #+#             */
/*   Updated: 2022/07/26 09:19:35 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/my_game.h"

static void	init_window(t_param *param)
{
	int	height;
	int	width;

	height = (param->height + 1) * 40;
	width = param->width * 40;
	param->mlx = mlx_init();
	param->mlx_win = mlx_new_window(param->mlx, width, height, "GAME");
	param->mlx_img = mlx_new_image(param->mlx, width, height);
	if (param->mlx == 0 || param->mlx_win == 0 || param->mlx_img == 0)
	{
		free_all(param);
		exit_error("ERROR: IMAGE INITIALISATION FAILED", 0);
	}
}

static void	init_images(t_param *param)
{
	put_image(param, &param->player, "./images/player_right.xpm");
	put_image(param, &param->porte, "./images/porte.xpm");
	put_image(param, &param->collectible, "./images/dot.xpm");
	put_image(param, &param->wall, "./images/wall.xpm");
	put_image(param, &param->ground, "./images/black.xpm");
	put_image(param, &param->ennemie_a, "./images/a_en.xpm");
	put_image(param, &param->ennemie_b, "./images/b_en.xpm");
	put_image(param, &param->ennemie_e, "./images/e_en.xpm");
	put_image(param, &param->ennemie_y, "./images/y_en.xpm");
}	

void	init_item(t_param *param, void *item, int i, int j)
{
	if (item == param->player)
	{
		param->player_x = i;
		param->player_y = j;
		mlx_put_image_to_window(param->mlx, param->mlx_win, \
			item, i * 40, j * 40);
	}
	else
		mlx_put_image_to_window(param->mlx, param->mlx_win, \
			item, i * 40, j * 40);
}

int	init_map(t_param *param)
{
	init_map_a(param);
	init_map_b(param);
	put_score(param);
	return (0);
}

void	game(t_param *param)
{
	init_window(param);
	init_images(param);
	init_map(param);
	enn_exit(param);
	mlx_hook(param->mlx_win, 2, 1L << 0, keypress, param);
	mlx_hook(param->mlx_win, 17, 1L << 17, free_all_exit, param);
	mlx_loop(param->mlx);
}
