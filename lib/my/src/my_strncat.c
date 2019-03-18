/*
** EPITECH PROJECT, 2017
** my_strncat.c
** File description:
** 
*/

#include "my.h"

char	*my_strncat(char *dest, char const *src, int nb)
{
	int i = 0;
	int destlen = my_strlen(dest);

	while (src[i] != '\0' && i < nb) {
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (dest);
}