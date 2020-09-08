/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** shell_header.c
*/
#include "proto.h"
#include "struct.h"

void logo_prompt(void)
{
    my_putstr("\033[5m\033[31m");
    my_putstr("   ______    \n");
    my_putstr("  /\\_____\\   \n");
    my_putstr(" _\\ \\__/_/_  \n");
    my_putstr("/\\_\\ \\_____\\ \n");
    my_putstr("\\ \\ \\// / // \n");
    my_putstr(" \\ \\/ /\\/ /  \n");
    my_putstr("  \\/_/\\/_/   \n");
    my_putstr("\033[1;37m");
    my_putchar('\n');
    my_putchar('\n');
}