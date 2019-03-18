/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** my_realloc.c
*/

#include "my.h"

char	*my_realloc(char *old_ptr, int size)
{
	int	i = 0;
	char	*new_ptr;

	if (old_ptr == NULL || size < 1)
		return (NULL);
	new_ptr = malloc(sizeof(char) * (size + 1));
	if (new_ptr == NULL)
		return (NULL);
	while (i < size && old_ptr[i] != '\0')
		new_ptr[i] = old_ptr[i++];
	new_ptr[i] = '\0';
	free(old_ptr);
	return (new_ptr);
}