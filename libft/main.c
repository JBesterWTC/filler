
#include "filler.h"

void print(t_piece *p)
{
		int fd;

		ft_putstr(ft_itoa(p->placey));
		ft_putchar(' ');
		ft_putstr(ft_itoa(p->placex));
		ft_putchar('\n');
		fd = open("text", O_WRONLY | O_APPEND);
		ft_putstr_fd("x :	", fd);
		ft_putstr_fd(ft_itoa(p->placey), fd);
		close(fd);
}

int main(int argc, char **argv)
{
	char	*lines;
	t_board	c;
	t_piece p;
	t_player t;
	int player;
	int i = 0;
	int fd;

//	fd = open("text", O_WRONLY | O_APPEND);
	while (42)
	{
	while (ft_get_next_line(0, &lines) > 0)
	{
		if (ft_strcmp("$$$ exec", lines))
			t.isplayer = ft_save_player(&lines, &t);
		if (ft_strcmp("Plateau", lines))
		{
			ft_get_next_line(0, &lines);
			c.map = save_map(&lines, &c);
		}
		if (ft_strcmp("Piece", lines))
		{
			p.piece = save_piece(&lines, &p);
			ft_search(c.map, &t, &c);
			move_direction(&p, &t, &c);
			print(&p);
		}
	}
	}
	//close (fd);
}

