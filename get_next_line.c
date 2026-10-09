/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirhyil <emirhyil@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:12:59 by emirhyil          #+#    #+#             */
/*   Updated: 2026/09/23 19:59:19 by emirhyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char *read_to_stash(int fd, char *stash)
{
    char *buffer;
    char *temp;
    int     bytes_read;

    buffer = (char *)malloc(sizeof(char)*(BUFFER_SIZE + 1));
    if(!buffer)
        return(NULL);
    bytes_read = 1;
    while (!ft_strchr(stash, '\n') && bytes_read != 0)
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if(bytes_read == -1)
        {
            free(buffer);
            free(stash);
            return (NULL);
        }
        buffer[bytes_read] = '\0';
        temp = ft_strjoin(stash, buffer);
        free(stash);
        stash = temp;
    }
    free(buffer);
    return (stash);
}