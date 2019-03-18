/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_strlen.c
*/

int	my_strlen(char const *str)
{
	int	a = 0;

	while (str[a] != '\0') {
		a++;
	}
	return (a);
}