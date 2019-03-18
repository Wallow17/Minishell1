/*
** EPITECH PROJECT, 2018
** minishell1
** File description:
** cd.c
*/

#include "my.h"
#include <dirent.h>
#include <stdio.h>

int	my_cd(char **tab, char **env)
{
	DIR	*rep;
	char	*path = NULL;

	if (!tab[1])
		my_strcpy(&path, grep_in_env(env, "HOME"));
	else
		if (my_strcmp(tab[1], "-") == 0)
			my_strcpy(&path, grep_in_env(env, "OLDPWD"));
		else
			my_strcpy(&path, tab[1]);
	rep = opendir(path);
	if (!rep) {
		perror(path);
		return (84);
	} else {
		chdir(path);
		closedir(rep);
		return (0);
	}
}