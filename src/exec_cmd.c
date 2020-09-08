/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** exec_cmd.c
*/
#include "proto.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

char *find_bin(char **envp, char **c)
{
    char *path = get_path(envp, "PATH");
    char **divided_paths = str_warray_path(path);
    char *cmd = my_str_concat("/", c[0]);
    char *str;
    struct stat filestat;

    for (int i = 0; divided_paths[i] != NULL; i++) {
        str = my_str_concat(divided_paths[i], cmd);
        if (stat(str, &filestat) != -1) {
            free(cmd);
            free(divided_paths);
            free(path);
            return str;
        }
    }
    free(cmd);
    free(divided_paths);
    free(path);
    free(str);
    return NULL;
}

void exec_cmd(char **envp, char **cmd)
{
    char *bin = find_bin(envp, cmd);

    if (!(bin)) {
        my_put_e(cmd[0]);
        my_put_e(": Command not found.\n");
    } else {
        if (fork() == 0) {
            execve(bin, cmd, envp);
            exit(0);
        }
    }
    free(bin);
}