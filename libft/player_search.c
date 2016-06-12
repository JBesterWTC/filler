/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmack <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 08:08:12 by tmack             #+#    #+#             */
/*   Updated: 2016/06/12 08:14:45 by tmack            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void    ft_search(char **map, t_player *player, t_board *b)
{
	int fd;
	int x;
	int y;

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
				ft_putstr_fd("player 1 x: ", fd);
				ft_putstr_fd(ft_itoa(player->pos_p1x), fd);
				ft_putstr_fd(" player 1 y: ", fd);
				ft_putstr_fd(ft_itoa(player->pos_p1y), fd);
			}
			else if (b->map[y][x] == 'O')
			{
				player->pos_p2x = x;
				player->pos_p2y = y;
				player->found_p2 = 1;
				ft_putstr_fd("player 2 x: ", fd);
				ft_putstr_fd(ft_itoa(player->pos_p2x), fd);
				ft_putstr_fd(" player 2 y: ", fd);
				ft_putstr_fd(ft_itoa(player->pos_p2y), fd);
			}
			x++;
		}
		y++;
	}
	close(fd);
}
