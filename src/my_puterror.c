/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_puterror
*/
#include <unistd.h>

void my_put_echar(char c)
{
    write(2, &c, 1);
}

void my_put_e(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_put_echar(str[i]);
}