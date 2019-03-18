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

int     my_putchar(char);
int 	my_strlen(char const *str);
int     my_strcpy(char **, char const *);
int 	my_strstr(char const *, char const *);
int     my_char_index(char const *, char);
char    *my_strlowcase(char *);
int     my_strcmp(char const *, char const *);

void	init_flags(int (*flag[11])(va_list list));
void	compare_flag(char c, va_list list);
int	my_printf(char *str, ...);
int	my_getnbr(char *str);

void	my_put_char(char c);
int	my_put_str(char const *str);
int	my_put_str_np(char const *str);
void	my_put_nbr(int nb);
int 	my_put_nbr_u(unsigned int nb);
int 	my_put_nbr_base(unsigned int nbr, int base);
int 	my_put_nbr_base_hex(unsigned int nbr, int upcase);
int 	my_put_nbr_base_hex_adress(long str);
int 	my_put_pointer(long str);

int	flag_d(va_list list);
int	flag_c(va_list list);
int	flag_s(va_list list);
int	flag_s_maj(va_list list);
int	flag_p(va_list list);
int	flag_b(va_list list);
int	flag_o(va_list list);
int	flag_u(va_list list);
int	flag_x(va_list list);
int	flag_x_maj(va_list list);

#endif
