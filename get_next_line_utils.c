/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirhyil <emirhyil@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:12:59 by emirhyil          #+#    #+#             */
/*   Updated: 2026/11/13 19:11:18 by emirhyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *string)
{
	size_t	i;

	if (!string)
		return (0);
	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *string, int c)
{
	int	i;

	i = 0;
	if (!string)
		return (NULL);
	while (string[i] != '\0')
	{
		if (string[i] == c)
		{
			return (&string[i]);
		}
		i++;
	}
	if (c == '\0')
		return (&string[i]);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*s3;

	if (!s1 && !s2)
		return (NULL);
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}
