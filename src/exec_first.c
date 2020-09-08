/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** exec_first.c
*/
#include "proto.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

void exec_first(char **envp, char **cmd)
{
    char *tmp = get_path(envp, "PWD=");
    char *bin;

    tmp = my_str_concat(tmp, "/");
    bin = my_str_concat(tmp, cmd[0]);
    if (!(bin)) {
        my_put_e(cmd[0]);
        my_put_e(": Command not found.\n");
    } else {
        if (fork() == 0) {
            execve(bin, cmd, envp);
            exit(0);
        }
    }
    free(tmp);
    free(bin);
}