#ifndef FILLER_H
# define FILLER_H
<<<<<<< HEAD

# include "libft/includes/libft.h"

# define PLAYER1  1
# define PLAYER2  2

typedef struct s_board
=======
# define PLAYER1 1
# define PLAYER2 2

# include <string.h>
# include "libft/includes/libft.h"

typedef struct	s_board
>>>>>>> 7a3b083c072d9216854d962dd1b4e3650234957d
{
	int		x;
	int		y;
	char	**map;
}				t_board;

<<<<<<< HEAD
=======
typedef	struct	s_piece
{
	int		x;
	int		y;
}

>>>>>>> 7a3b083c072d9216854d962dd1b4e3650234957d
#endif
