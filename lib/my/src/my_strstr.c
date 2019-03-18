/*
** EPITECH PROJECT, 2017
** my_strstr.c
** File description:
**
*/

#include <unistd.h>

int	my_strstr(char const *str, char const *to_find)
{
	int	i = 0;
	int	j = 0;

	while (str[i] != '\0') {
		while (str[i + j] == to_find[j]) {
			j++;
			if (to_find[j] == '\0')
				return (0);
		}
		j = 0;
		i++;
	}
	return (1);
}

int	my_char_index(char const *str, char c)
{
	int	i = -1;

	while (str && str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}