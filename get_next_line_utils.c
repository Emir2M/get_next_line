

#include "get_next_line.h"

size_t ft_strlen(char *string)
{
    size_t i;

    i=0;
    while(string[i]!='\0')
    {
        i++;
    }
    return (i);
}

void    ft_putstr_fd(char *string, int fd)
{
    int i;

    i=0;
    while(string[i]!='\0')
    {
        write(fd, &string[i],1);
        i++;
    }
}

char  *ft_strchr(char *string, int c)
{
    int i;

    i=0;
    if(!string)
        return (NULL);
    while (string[i]!='\0')
    {
        if(string[i]==c)
        {
           return(&string[i]); 
        }
        i++;
    }
    if (c == '\0')
        return (&string[i]);
    return (NULL);
}
int main()
{
    // int fd;
    // fd = open("deneme.txt", O_CREAT | O_RDWR, 0644);

    // if(fd== -1)
    //     return (-1);
    // char *string = "emirhan\nyildirim";
    // ft_putstr_fd(string, fd);

    char *string;
    char c = 'a';


}