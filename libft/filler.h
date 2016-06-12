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
	float		x_2;
	float		y_2;
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

char p_case(t_player *c);
int quad1_search(char ch, int max_x, int max_y , t_piece *p, char **map);
int quad2_search(char ch, int max_x, int max_y , t_piece *p, char **map);
int quad3_search(char ch, int max_x, int max_y , t_piece *p, char **map);
int quad4_search(char ch, int max_x, int max_y , t_piece *p, char **map);
int 	piece_quad(t_board *c, t_player *t, int max_x, int max_y);
void    ft_search(char **map, t_player *player, t_board *b);
char	**save_map(char **line, t_board *c);
char	**save_piece(char **line, t_piece *p);
int		ft_save_player(char **line, t_player *player);
void	move_direction(t_piece *p, t_player *t, t_board *c);
#endif
