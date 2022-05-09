/*
** EPITECH PROJECT
** LibC
** File description:
** my_cat.c
*/

#include "libmy.h"

int my_cat(char *filepath)
{
    int fd = 0;
    char *missing = "MissingNo.\n";
    char buf[30000];
    int size = 0;

    fd = open(filepath, O_RDONLY);
    if (fd == -1){
        my_putstr(missing);
        return 0;
    }
    size = read(fd, buf, 30000);
    buf[size] = '\0';
    my_putstr(buf);
    close(fd);
    return 0;
}