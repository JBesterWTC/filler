/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2016/06/06 11:00:56 by jbester           #+#    #+#             */
/*   Updated: 2016/06/06 11:01:03 by jbester          ###   ########.fr       */
=======
/*   Created: 2016/06/06 10:50:16 by tmack             #+#    #+#             */
/*   Updated: 2016/06/06 12:45:04 by tmack            ###   ########.fr       */
>>>>>>> 92cdb1845fdf7614f2493d3b58a3624e0739a3b7
/*                                                                            */
/* ************************************************************************** */

#include "libft\includes\libft.h"
#include "filler.h"

int main(int argc, char **argv)
{
	int		fd;
	char 	*lines;
	char	**grid;
	int		i = 0;

	fd = open(argv[0], O_RDONLY);

	while (ft_get_next_line(fd, &lines))
	{
		ft_putstr(lines[i]);
		ft_putchar('\n');
		i++;
	}
}
