/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** minishell.c
*/
#include "struct.h"
#include "proto.h"
#include <stdlib.h>
#include <stdio.h>


int minishell(char **envp)
{
    size_t bufsize = 32;
    char *c = malloc(sizeof (char) * bufsize);
    char **cmd;

    if (getline(&c, &bufsize, stdin) == -1 || my_strcmp(c, "exit\n") == 1) {
        if (my_strcmp(c, "exit\n") == 1)
            my_putstr("exit\n");
        return 1;
    }
    if (my_strncmp(c, "\n", 1) == 1)
        return 0;
    cmd = str_warray(c);
    if (my_strncmp(cmd[0], "./", 2) == 1) {
        cmd[0] = my_struncat(cmd[0], "./");
        exec_first(envp, cmd);
    } else if (detect_cmd(envp, cmd[0], cmd) == -1)
        exec_cmd(envp, cmd);
    free(c);
    free(cmd);
    return 0;
}