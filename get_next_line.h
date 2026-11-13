/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirhyil <emirhyil@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:55:12 by emirhyil          #+#    #+#             */
/*   Updated: 2026/11/13 18:14:55 by emirhyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE = 42
#endif

size_t	ft_strlen(char *string);
void	ft_putstr_fd(char *string, int fd);
char	*ft_strchr(char *string, int c);
char	*ft_strjoin(char *s1, char *s2);

#endif
