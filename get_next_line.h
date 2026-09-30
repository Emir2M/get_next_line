#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdio.h> // printf kullanmak için ekledim.
#include <fcntl.h> // open() kullanmak için ekledim.
#include <unistd.h> //  write kullanmak için ekledim.

char *get_next_line(int fd);
int ft_strlen(char *string);
void    ft_putstr_fd(char *string, int fd);

#endif
