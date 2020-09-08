/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** proto
*/

#ifndef PROTO_H_
#define PROTO_H_

void logo_prompt(void);
void my_putchar(char c);
void my_put_echar(char c);
int my_strlen(char *str);
void my_put_e(char *str);
void my_putstr(char *str);
char *my_str(char *str);
char *my_str_concat(char *s, char *str);
char *my_struncat(char *str, char *s);
int my_strcmp(char *cmd, char *str);
int my_strncmp(char *env, char *path, int len);
char *get_path(char **envp, char *src);
char **str_warray_path(char const *str);
char **str_warray(char const *str);
char *cleaned_line(char *str);
void exec_env(char **envp);
void exec_cd(char **cmd, char **envp);
int detect_cmd(char **envp, char *c, char **cmd);
void exec_cmd(char **envp, char **c);
void exec_first(char **envp, char **cmd);
int minishell(char **envp);

#endif
