/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** 
*/

#include "my.h"

char	*my_revstr(char *str)
{
	int	min = 0;
	int	max = my_strlen(str) - 1;
	char	x = 0;

	while (max > min) {
		x = str[max];
		str[max] = str[min];
		str[min] = x;
		max--;
		min++;
	}
	return (str);
}
