/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** env.c
*/

#include "my.h"

char	*grep_in_env(char **env, char *to_find)
{
	int	i = -1;
	int	j = -1;
	int	k = -1;
	char	*final_str = NULL;

	while (env[++i]) {
		j = -1;
		while (env[i][++j] == to_find[j]);
		if (env[i][j] == '=' && to_find[j] == '\0') {
			final_str =
			malloc(sizeof(char) * (my_strlen(env[i]) - j + 1));
		 	while (env[i][++j] != '\0')
				final_str[++k] = env[i][j];
			return (final_str);
		}
	}
	return (NULL);
}