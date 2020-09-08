/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** get_path.c
*/
#include "proto.h"
#include <stdlib.h>

int my_strlen(char *str)
{
    int len = 0;

    if (str == NULL)
        return 0;
    for (; str[len]; len++);
    return len;
}

char *my_str(char *str)
{
    char *s = malloc(sizeof (char) * my_strlen(str));

    for (int i = 0; str[i] != '\0'; i++)
        s[i] = str[i];
    return s;
}