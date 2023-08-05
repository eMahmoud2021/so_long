# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 18:46:27 by memam             #+#    #+#              #
#    Updated: 2022/07/29 14:54:17 by memam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLU			= \033[0;34m
GRN			= \033[0;32m
RED			= \033[0;31m
RST			= \033[0m
END			= \e[0m
SRCS		= 	srcs/main.c \
				srcs/game.c \
				srcs/utile.c \
				srcs/get_map.c \
				srcs/check_map.c \
				srcs/deplacements.c \
				srcs/all_init_map.c \
				srcs/utile1.c
				
NAME		= game
OBJS_DIR	= objs/
PROJECT_H	= include/my_game.h
OBJS		= $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
CC			= gcc
CC_FLAGS	= -Wall -Werror -Wextra -Imlx -g
MLXFLAGS =  -lmlx -framework OpenGl -framework AppKit 



$(OBJS_DIR)%.o : %.c $(PROJECT_H)
	@mkdir -p $(OBJS_DIR)
#	@mkdir -p $(OBJS_DIR)srcs
	@$(CC) $(CC_FLAGS) -c $< -o $@
	@printf	"\033[2K\r${BLU}[BUILD]${RST} '$<' $(END)"

all : $(NAME)

$(NAME): $(OBJECTS_PREFIXED) maker
	@$(CC) -o $(NAME) $(OBJECTS_PREFIXED) $(CC_FLAGS) ./minilibx/libmlx.a ./libft/libft.a ${MLXFLAGS}
	@printf "\033[2K\r\033[0;32m[file created]]\033[0m $(NAME) $(END)\n"


maker:
	@make -C ./libft
	@make -C ./minilibx

clean:
	@make clean -C ./libft
	@make clean -C ./minilibx
	@rm -rf $(OBJS_DIR)
	@printf "\033[2K\r${GRN}[CLEAN]${RST} done$(END)\n"

fclean: clean
	@make fclean -C ./libft
#	@make fclean -C ./minilibx
	@rm -f $(NAME)
	@printf "\033[2K\r${GRN}[FCLEAN]${RST} done$(END)\n"

re: fclean all

.PHONY:		all clean fclean re
