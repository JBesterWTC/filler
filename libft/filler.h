#ifndef FILLER_H
# define FILLER_H

# include <string.h>
# include "libft.h"
#include <fcntl.h>

typedef struct  s_board
{
	int     max_x;
	int     max_y;
	char    **map;
}               t_board;

typedef struct	s_piece
{
	int		p_x_max;
	int		p_y_max;
	char	**piece;
	int		placex;
	int		placey;
}				t_piece;

typedef struct	s_player
{
	int		isplayer;
	int		pos_p1x;
	int		pos_p1y;
	int		found_p1;
	int		pos_p2x;
	int		pos_p2y;
	int		found_p2; 
}				t_player;

int 	piece_quad(t_board *c, t_player *t);
void    ft_search(char **map, t_player *player, t_board *b);
char	**save_map(char **line, t_board *c);
char	**save_piece(char **line, t_piece *p);
int		ft_save_player(char **line, t_player *player);
void	piece_check(t_piece *p, t_player *t, t_board *c);
#endif
