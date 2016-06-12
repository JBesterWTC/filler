#include "filler.h"

char p_case(t_player *c)
{
	char player;

	if (c->isplayer == 0)
		player = 'x';
	else if (c->isplayer == 1)
		player = 'o';
	return (player);
}

