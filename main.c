/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:50:49 by lburkins          #+#    #+#             */
/*   Updated: 2024/05/10 14:19:56 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("tests/text_with_lots_of_nls", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		printf("FULL LINE: %s\n", line);
		if (line == NULL)
			break ;
		free(line);
	}
	return (0);
}
