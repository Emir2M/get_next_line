/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirhyil <emirhyil@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:55:12 by emirhyil          #+#    #+#             */
/*   Updated: 2026/11/13 12:56:52 by emirhyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(char *string);
char	*ft_strchr(char *string, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*read_to_stash(int fd, char *stash);
char	*extract_line(char *stash);
char	*clean_stash(char *stash);
char	*get_next_line(int fd);

#endif
