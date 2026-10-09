#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdio.h> // printf kullanmak için ekledim.
#include <fcntl.h> // open() kullanmak için ekledim.
#include <unistd.h> //  write ve read() kullanmak için ekledim.

#ifndef BUFFER_SIZE
#define BUFFER_SIZE

size_t ft_strlen(char *string);
void    ft_putstr_fd(char *string, int fd);
char  *ft_strchr(char *string, int c);
char    *ft_strjoin(char *s1, char *s2);


#endif
