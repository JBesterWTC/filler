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
	char    **map;
}               t_board;

typedef struct	s_players
{
	int		x1;
	int		x2;
	int		opx;
	int		opy;
	char	**opp;
	char	**me;
}				t_players;

#endif
