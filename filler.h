#ifndef FILLER_H
# define FILLER_H

# include <string.h>
# include "libft/includes/libft.h"

typedef struct  s_board
{
	int     x;
	int     y;
	char    **map;
}               t_board;

typedef struct  s_piece
{
	int     x;
	int     y;
}               t_piece;

#endif
