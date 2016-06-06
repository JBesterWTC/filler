#ifndef FILLER_H
# define FILLER_H
# define PLAYER1 1
# define PLAYER2 2

# include "libft/includes/libft.h"

typedef struct	s_board
{
	int		x;
	int		y;
	char	**map;
}				t_board;

typedef	struct	s_piece
{
	int		x;
	int		y;
}

#endif
