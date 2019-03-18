/*
** EPITECH PROJECT, 2017
** lib
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>

char    **my_str_to_wordarray(char *str, char c);
int     my_putchar(char);
int 	my_printf(char *str, ...);
int 	my_strlen(char const *str);
int	my_put_char(char c);
int	my_put_str(char const *str);
int	my_put_str_np(char const *str);
int	my_put_nbr(int nb);
int 	my_put_nbr_u(unsigned int nb);
int 	my_put_nbr_base(unsigned int nbr, int base);
int 	my_put_nbr_base_hex(unsigned int nbr, int upcase);
int 	my_put_nbr_base_hex_adress(long str);
int 	my_put_pointer(long str);
int     my_strcpy(char **, char const *);
int 	my_strstr(char const *, char const *);
int     my_char_index(char const *, char);
char    *my_strlowcase(char *);
int     my_strcmp(char const *, char const *);
char	*my_strcat(char *before, char *after);
char    *my_strncpy(char *str, char *dest, int spos, char c);

int	my_sh(char **env);
char	*grep_in_env(char **env, char *to_find);
char	*find_path(char **tab, char **env);
int	my_cd(char **tab, char **env);
#endif
