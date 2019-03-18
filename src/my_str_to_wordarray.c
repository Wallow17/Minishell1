/*
** EPITECH PROJECT, 2017
** minishell1
** File description:
** my_str_to_wordarray.c
*/

#include <string.h>
#include "my.h"

static int	word_count(char *str, char c)
{
	char	prev = c;
	int	cpt = 0;
	int	i = 0;

	while (str[i] != '\0') {
		if ((prev == c) && (str[i] != c))
			cpt++;
		prev = str[i];
		i++;
	}
	return (cpt);
}

int	count(char *str, int spos, char c)
{
	int	i = 0;

	while ((str[spos] != c) && (str[spos] != '\0')) {
		spos++;
		i++;
	}
	return (i);
}

char    **my_str_to_wordarray(char *str, char c)
{
	char	**tab = malloc((word_count(str, c) + 1) * sizeof(tab));
	char	prev = c;
	int	i = 0;
	int	j = 0;

	while (str[i] != '\0') {
		if ((prev == c) && (str[i] != c)) {
			tab[j] = malloc((count(str, i, c) + 1) * sizeof(**tab));
			my_strncpy(str, tab[j], i, c);
			j++;
		}
		prev = str[i];
		i++;
	}
	tab[j] = NULL;
	return (tab);
}