/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** cmd_detect
*/
#include "proto.h"
#include <stdlib.h>

int detect_cmd(char **envp, char *c, char **cmd)
{
    if (my_strcmp(c, "cd") == 1)
        exec_cd(cmd, envp);
    else if (my_strcmp(c, "env") == 1)
        exec_env(envp);
    else
        return -1;
    return 0;
}