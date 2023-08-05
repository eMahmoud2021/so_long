/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:08:05 by memam             #+#    #+#             */
/*   Updated: 2022/07/22 14:42:35 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/my_game.h"

static t_param	*init_param_ennemie(t_param *param)
{
	param->b = 0;
	param->g = 0;
	param->r = 0;
	param->y = 0;
	param->ennemie_a = NULL;
	param->ennemie_b = NULL;
	param->ennemie_e = NULL;
	param->ennemie_y = NULL;
	return (param);
}

static t_param	*init_param_game(t_param *param)
{
	param->player_x = 0;
	param->player_y = 0;
	param->map = NULL;
	param->width = 0;
	param->height = 0;
	param->mlx = NULL;
	param->mlx_win = NULL;
	param->mlx_img = NULL;
	param->mlx_string = 0;
	param->count = 0;
	param->c = 0;
	param->e = 0;
	param->p = 0;
	param->player = NULL;
	param->wall = NULL;
	param->porte = NULL;
	param->ground = NULL;
	param->collectible = NULL;
	param->success = 0;
	param->fail = 0;
	return (param);
}

static t_param	*init_param(t_param *param)
{
	init_param_ennemie(param);
	init_param_game(param);
	return (param);
}

static int	check_file(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] && argv[i] != '.')
		i++;
	if (ft_strncmp((argv + i), ".ber", 4) != 0)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_param	*param;

	if (argc != 2)
		exit_error("ERROR! FORMAT: ./GAME <MAP.BER>", 0);
	if (!check_file(argv[1]))
		exit_error("File is not .ber", 0);
	param = (t_param *)malloc(sizeof(t_param));
	param = init_param(param);
	build_map(argv[1], param);
	game(param);
	return (0);
}
