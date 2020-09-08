/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef enum bool_e {
    false,
    true
} bool_t;

typedef struct shell_s {
    bool_t running;
} shell_t;

#endif /* !STRUCT_H_ */
