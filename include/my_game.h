/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_game.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:49:55 by memam             #+#    #+#             */
/*   Updated: 2022/07/25 12:43:51 by memam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_GAME_H
# define MY_GAME_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "../minilibx/mlx.h"
//# include <mlx.h>
# include "../libft/libft.h"

typedef struct s_param
{
	int		player_x;
	int		player_y;
	char	**map ;
	int		width;
	int		height;
	void	*mlx;
	void	*mlx_win;
	void	*mlx_img;
	int		mlx_string;
	int		count;
	int		c;
	int		e;
	int		p;
	int		b;
	int		g;
	int		r;
	int		y;
	void	*ennemie_a;
	void	*ennemie_b;
	void	*ennemie_e;
	void	*ennemie_y;
	void	*player;
	void	*wall;
	void	*porte;
	void	*ground;
	void	*collectible;
	int		success;
	int		fail;
}			t_param;

/****************************************
                                  utile
                                     ****************************************/

int		keypress(int code, t_param *param);
void	free_all(t_param *param);
void	exit_error(char *msg, int code);
int		free_all_exit(t_param *param);
void	put_image(t_param *param, void **image, char *path);

/****************************************
                              deplacements
                                     ****************************************/

int		move_up(t_param *param);
int		move_right(t_param *param);
int		move_left(t_param *param);
int		move_down(t_param *param);
/****************************************
                                  game
                                     ****************************************/

int		init_map(t_param *param);
void	game(t_param *param);
void	init_item(t_param *param, void *item, int i, int j);

/****************************************
                                  check_map
                                     ****************************************/

void	check_map(t_param *param);

/****************************************
                                  get_map
                                     ****************************************/

void	build_map(char *argv, t_param *param);

/****************************************
                                  all_init_map
                                     ****************************************/
int		init_map_a(t_param *param);
int		init_map_b(t_param *param);
int		put_score(t_param *param);
void	check_char_enn(t_param *param);
void	enn_exit(t_param *param);

int		sortie_exit(t_param *param);
void	move_enn(t_param *param);

#endif