/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf.c
*/

#include "my.h"

void	init_flags(int (*flag[11])(va_list list))
{
	flag[0] = &flag_d;
	flag[1] = &flag_d;
	flag[2] = &flag_s;
	flag[3] = &flag_c;
	flag[4] = &flag_s_maj;
	flag[5] = &flag_p;
	flag[6] = &flag_b;
	flag[7] = &flag_o;
	flag[8] = &flag_u;
	flag[9] = &flag_x;
	flag[10] = &flag_x_maj;
}

int	isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (-1);
}

void	compare_flag(char c, va_list list)
{
	int i = 0;
	char *str = "discSpbouxX";

	int (*flag[11])(va_list list);
	init_flags(flag);
	while (str[i] != '\0') {
		if (c == str[i])
			flag[i](list);
		i += 1;
	}
}

int	create_space(char *str, int i)
{
	int j = 0;
	int k = 0;
	char *nbr = malloc(10 * sizeof(char));

	while (isnum(str[i]) == 1)
		nbr[j++] = str[i++];
	nbr[j] = '\0';
	while ((k++) < my_getnbr(nbr) - 7)
		my_put_char(' ');
	my_put_str("Success");
	return (j);
}

int	my_printf(char *str, ...)
{
	int i = 0;
	va_list list;

	va_start(list, str);
	while (str[i] != '\0') {
		if (str[i] == '%' && isnum(str[i + 1]) == 1)
			i += create_space(str, (++i));
		else if (str[i] == '%' && str[i + 1] != '%')
			compare_flag(str[++i], list);
		else
			my_put_char(str[i]);
		i += 1;
	}
	va_end(list);
	return (i);
}
