/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** 
*/

#include "my.h"

char	*my_strcat(char *before, char *after)
{
	int	i = -1;
	int	j = -1;
	int	beforelen = my_strlen(before);
	int	afterlen = my_strlen(after);
	char	*final_str =
	malloc(sizeof(char) * (beforelen + afterlen + 1));

	while (++j < beforelen)
		final_str[++i] = before[j];
	j = -1;
	while (++j < afterlen)
		final_str[++i] = after[j];
	final_str[++i] = '\0';
	return (final_str);
}
