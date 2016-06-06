/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/06 12:23:37 by jbester           #+#    #+#             */
/*   Updated: 2016/06/06 12:48:45 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
<<<<<<< HEAD
# define PLAYER1 1
# define PLAYER2 2
# include <stdlib.h>
# include <string.h>
# include "libft.h"
=======
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
>>>>>>> 92cdb1845fdf7614f2493d3b58a3624e0739a3b7

typedef struct	s_board
>>>>>>> 7a3b083c072d9216854d962dd1b4e3650234957d
{
	int		x;
	int		y;
	char	**map;
}				t_board;

<<<<<<< HEAD
typedef struct	s_players
{
	int		x1;
	int		x2;
	int		opx;
	int		opy;
	char	**opp;
	char	**self;
}				t_players;

=======
<<<<<<< HEAD
=======
typedef	struct	s_piece
{
	int		x;
	int		y;
}

>>>>>>> 7a3b083c072d9216854d962dd1b4e3650234957d
>>>>>>> 92cdb1845fdf7614f2493d3b58a3624e0739a3b7
#endif
