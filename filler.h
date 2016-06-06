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
# define PLAYER1 1
# define PLAYER2 2
# include <stdlib.h>
# include <string.h>
# include "libft.h"

typedef struct	s_board
{
	int		x;
	int		y;
	char	**map;
}				t_board;

typedef struct	s_players
{
	int		x1;
	int		x2;
	int		opx;
	int		opy;
	char	**opp;
	char	**self;
}				t_players;

#endif
