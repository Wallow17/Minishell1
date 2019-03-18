/*
** EPITECH PROJECT, 2017
** minishell1
** File description:
** minishell1.c
*/

#include "get_next_line.h"
#include "my.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <signal.h>

char	*find_path(char **tab, char **env)
{
	int	i = -1;
	char	**path = my_str_to_wordarray(grep_in_env(env, "PATH"), ':');
	char	*tmp = NULL;

	if (tab[0][0] == '.' && tab[0][1] == '/') {
		tmp = malloc(sizeof(char) * my_strlen(tab[0]) - 1);
		while (tab[0][1 + (++i)] != '\0')
			tmp[i] = tab[0][1 + i];
		return (tmp);
	}
	while (path[++i]) {
		tmp = my_strcat(path[i], "/");
		tmp = my_strcat(tmp, tab[0]);
		if (access(tmp, F_OK) == 0)
			return (tmp);
	}
	return (NULL);
}

int	do_exec(char **tab, char **env)
{
	int	child;
	int	status;
	char	*path = NULL;

	if ((path = find_path(tab, env)) != NULL)
		child = fork();
	else
		my_printf("%s: Command not found.\n", tab[0]);
	if (child == 0)
		execve(path, tab, env);
	else {
		waitpid(child, &status, WUNTRACED | WCONTINUED);
		if (WIFSIGNALED(status) != NULL) {
			write(2, "Segmentation fault\n", 20);
			return (84);
		}
	}
	return (0);
}

char	*get_current_dir()
{
	int	i = -1;
	char	**tab;
	char	buffer[512];

	getcwd(buffer, 512);
	if (my_strcmp(buffer, "/") == 0)
		return ("/");
	tab = my_str_to_wordarray(buffer, '/');
	while (tab[++i]);
	return (tab[i - 1]);
}

int	my_sh(char **env)
{
	char	**tab;
	char	*str = NULL;

	while (my_printf("> %s$ ", get_current_dir()),
	(str = get_next_line(0)) != NULL && my_strcmp(str, "exit") != 0) {
		if (my_strcmp(str, "\0") != 0) {
			tab = my_str_to_wordarray(str, ' ');
			if (tab[0]) {
				if (my_strcmp(tab[0], "cd") == 0)
					my_cd(tab, env);
				else
					do_exec(tab, env);
			}
		}
		free(str);
	}
	return (0);
}

int	main(int ac, char **av, char **ae)
{
	char **env = ae;

	if (ac == 1)
		if (my_sh(env) == 0)
			return (0);
	return (84);
}