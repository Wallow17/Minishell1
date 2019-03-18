/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** 
*/

#include "my.h"

int	my_strcpy(char **dest, char const *src)
{
	int	i = 0;

	if ((*dest = malloc(my_strlen(src) + 1)) == NULL)
		return (1);
	while (src[i] != '\0') {
		(*dest)[i] = src[i];
		i++;
	}
	(*dest)[i] = '\0';
	return (0);
}