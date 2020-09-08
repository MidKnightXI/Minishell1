/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** cd.c
*/
#include "proto.h"
#include <unistd.h>
#include <stdlib.h>

void exec_env(char **envp)
{
    char n = '\n';

    for (int i = 0; envp[i] != NULL; i++) {
        write(1, envp[i], my_strlen(envp[i]));
        write(1, &n, 1);
    }
}