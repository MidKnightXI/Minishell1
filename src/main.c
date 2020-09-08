/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** main.c
*/
#include "struct.h"
#include <signal.h>
#include "proto.h"
#include <stdio.h>
#include <stdlib.h>

void sigint_handler(int signum)
{
    signal(SIGINT, sigint_handler);
    my_putstr("\b\b  \n");
}

int main(int ac, char **av, char **envp)
{
    shell_t *shell = malloc(sizeof(shell_t));
    shell->running = true;

    (void)av;
    if (ac > 1)
        return 84;
    signal(SIGINT, sigint_handler);
    logo_prompt();
    while (shell->running == true) {
        if (minishell(envp) == 1)
            return 0;
    }
    free(shell);
    return 0;
}