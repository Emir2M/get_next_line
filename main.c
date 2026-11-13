/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirhyil <emirhyil@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:57:16 by emirhyil          #+#    #+#             */
/*   Updated: 2026/11/13 12:57:51 by emirhyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	char	*line;

	printf("Bir şeyler yazip Enter'a basin (Çikmak için Ctrl + D):\n");
	while ((line = get_next_line(0)) != NULL)
	{
		printf("GNL Okudu -> %s", line);
		free(line);
	}
	return (0);
}
