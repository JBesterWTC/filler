#ifndef FILLER_H
# define FILLER_H
# include <string.h>
# include <fcntl.h>
# include "libft/includes/libft.h"
# define PLAYER1 1
# define PLAYER2 2

typedef struct  s_board
{
	int     x;
	int     y;
	int		max_y;
	int		max_x;
	char    **map;
}               t_board;

typedef struct	s_players
{
	int		x1;
	int		y1;
	int		opx;
	int		opy;
	char	**opp;
	char	**me;
}				t_players;

char	ft_search(char **grid, char p1, char p2);

#endif
