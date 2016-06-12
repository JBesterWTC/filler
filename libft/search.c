/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 08:55:36 by tmack             #+#    #+#             */
/*   Updated: 2016/06/12 09:34:27 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		piece_quad(t_board *c, t_player *t, int max_x, int max_y)
{
	int quad;
	int x;
	int y;

	c->x_2 = max_x / 2;
	c->y_2 = max_y / 2;
	if (t->isplayer == 1)
	{
		x = t->pos_p2x;
		y = t->pos_p2y;
	}
	else
	{
		x = t->pos_p1x;
		y = t->pos_p1y;
	}
	if ((x > 0 && x < c->x_2) && (y < c->y_2 && y > 0))
		quad = 1;
	if ((x > c->x_2 && x < c->max_x) && (y < c->y_2 && y > 0))
		quad = 2;
	if ((x > 0 && x < c->x_2) && (y > c->y_2 && y < c->max_y))
		quad = 3;
	if ((x > c->x_2 && x < c->max_x) && (y > c->y_2 && y < c->max_y))
		quad = 4;
	return (quad);
}

int quad1_search(char ch, int max_x, int max_y, t_piece *p, char **map)
{
	int x;
	int y;
	y = 0;
	while (y < max_y - 1)
	{
		x = 0;
		while (x < max_x - 1)
		{
			if (map[y][x] == ft_tolower(ch) || map[y][x] == ft_toupper(ch))
			{
				p->placex = x;
				p->placey = y;
				return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}

int		quad2_search(char ch, int max_x, int max_y, t_piece *p, char **map)
{
	int x;
	int y;

	y = 0;
	while (y < max_y - 1)
	{
		x = max_x - 1;
		while (x > 0)
		{
			if (map[y][x] == ft_tolower(ch) || map[y][x] == ft_toupper(ch))
			{
				p->placex = x;
				p->placey = y;
				return (1);
			}
			x--;
		}
		y++;
	}
	return (0);
}

int		quad3_search(char ch, int max_x, int max_y , t_piece *p, char **map)
{
	int x;
	int y;

	y = max_y - 1;
	while (y > 0)
	{
		x = 0;
		while (x < max_x - 1)
		{
			if (map[y][x] == ft_tolower(ch) || map[y][x] == ft_toupper(ch))
			{
				p->placex = x;
				p->placey = y;
				return (1);
			}
			x++;
		}
		y--;
	}
	return (0);
}

int		quad4_search(char ch, int max_x, int max_y, t_piece *p, char **map)
{
	int x;
	int y;

	y = max_y - 1;
	while (y > 0)
	{
		x = max_x - 1;
		while (x > 0)
		{
			if (map[y][x] == ft_tolower(ch) || map[y][x] == ft_toupper(ch))
			{
				p->placex = x;
				p->placey = y;
				return (1);
			}
			x--;
		}
		y--;
	}
	return (0);

}
