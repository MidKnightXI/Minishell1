/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** exec_cd.c
*/
#include "proto.h"
#include <stdlib.h>
#include <unistd.h>

void exec_error(int i, char *cmd)
{
    if (i == -1) {
        my_put_e(cmd);
        my_put_e(": No such file or directory.");
    }
}

void exec_cd(char **cmd, char **envp)
{
    int i = 0;
    char *home = get_path(envp, "HOME=");
    char *pwd = get_path(envp, "OLDPWD=");

    if (cmd[1] == NULL) {
        chdir(home);
    } else if (cmd[1][0] == '-' && cmd[1][1] == '\0') {
        chdir(pwd);
    } else {
        i = chdir(cmd[1]);
        exec_error(i, cmd[1]);
    }
    free(home);
    free(pwd);
}