/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** 
*/

#include "my.h"

char	*my_strupcase(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	i = 0;
	return (str);
}
