

#include "get_next_line.h"

size_t ft_strlen(char *string)
{
    size_t i;

    if(!string)
        return(NULL);

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

char    *ft_strjoin(char *s1, char *s2)
{
    size_t i;
    size_t j;
    char *s3;

    if(!s1 && !s2)
        return (NULL);
    s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if(!s3)
        return (NULL);
    i=0;
    j=0;
    while(s1[i]!='\0')
    {
        s3[i]=s1[i];
        i++;
    }
    while(s2[j]!='\0')
    {
        s3[i]=s2[j];
        j++;
        i++;
    }
    s3[i]='\0';
    return (s3);
}

static char *ft_left_str()
{

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