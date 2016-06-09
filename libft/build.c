
#include "filler.h"
//#include <fcntl.h>

void	ft_search(char **map, t_player *player, t_board *b)
{
	int			fd;
	int			x;
	int			y;

	y = 0;
	fd = open("text", O_WRONLY | O_APPEND);
	while (y < b->max_y)
	{
		x = 0;
		while (x < b->max_x)
		{
			if (b->map[y][x] == 'X')
			{
				player->pos_p1x = x;
				player->pos_p1y = y;
				player->found_p1 = 1;
				ft_putstr_fd("player 1 x: ",fd);
				ft_putstr_fd(ft_itoa(player->pos_p1x),fd);
				ft_putstr_fd(" player 1 y: ",fd);
				ft_putstr_fd(ft_itoa(player->pos_p1y),fd);	
			}
			else if (b->map[y][x] == 'O')
			{
				player->pos_p2x = x;
				player->pos_p2y = y;
				player->found_p2 = 1;
				ft_putstr_fd("player 2 x: ",fd);
				ft_putstr_fd(ft_itoa(player->pos_p2x),fd);
				ft_putstr_fd(" player 2 y: ",fd);
				ft_putstr_fd(ft_itoa(player->pos_p2y),fd);
			}
			x++;
		}
		y++;
	}
	close(fd);
}

int	 piece_quad(t_board *c, t_player *t)
{
	float x_2;
	float y_2;
	int quad;

	x_2 = c->max_x / 2;
	y_2 = c->max_y / 2;

	if ((t->pos_p1x > 0 && t->pos_p1x < x_2) && (t->pos_p1y < y_2 && t->pos_p1y > 0))
		quad = 1;
	if ((t->pos_p1x > x_2 && t->pos_p1x < c->max_x) && 
			(t->pos_p1y < y_2 && t->pos_p1y > 0))
		quad = 2;
	if ((t->pos_p1x > 0 && t->pos_p1x < x_2) && (t->pos_p1y > y_2 &&
			   	t->pos_p1y < c->max_y))
		quad = 3;
	if ((t->pos_p1x > x_2 && t->pos_p1x < c->max_x) &&
		   	(t->pos_p1y > y_2 && t->pos_p1y < c->max_y))
		quad = 4;
	return (quad);
}

void piece_check(t_piece *p, t_player *t, t_board *c)
{
	int y;
	int x;

	int placex;
	int placey;
	int fd;
	int quad;

	quad = piece_quad(c, t);
	fd = open("text", O_WRONLY | O_APPEND);
	if (quad == 4)
	{
		y = c->max_y - 1;
		while (y > 0)
		{
			x = c->max_x - 1;
			while (x > 0)
			{
				if (c->map[y][x] == 'O' || c->map[y][x] == 'o')
				{
					placex = x; 
					placey = y;
				}
				x--;
			}
			y--;
		}
	}
	else if (quad == 1)
	{
		y = 0;
		while (y < c->max_y - 1)
		{
			x = 0;
			while (x < c->max_x - 1)
			{
				if (c->map[y][x] == 'O' || c->map[y][x] == 'o')
				{
					placex = x;
					placey = y;
				}
				x++;
			}
			y++;
		}
	}
	else if (quad == 3)
	{
		y = c->max_y - 1;
		while (y > 0)
		{
			x = 0;
			while (x < c->max_x - 1)
			{
				if (c->map[y][x] == 'O' || c->map[y][x] == 'o')
				{
					placex = x;
					placey = y;
				}
				x++;
			}
			y--;
		}
	}
	else if ( quad == 2)
	{
		y = 0;
		while (y < c->max_y - 1)
		{
			x = c->max_x - 1;
			while (x > 0)
			{
				if (c->map[y][x] == 'O' || c->map[y][x] == 'o')
				{
					placex = x;
					placey = y;
				}
				x--;
			}
			y++;
		}
	}
	close (fd);
}

