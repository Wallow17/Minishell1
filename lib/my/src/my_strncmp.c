/*
** EPITECH PROJECT, 2017
** my_strncmp.c
** File description:
** 
*/

#include "my.h"

int	my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;
	int ns1 = my_strlen(s1);
	int ns2 = my_strlen(s2);

	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n) {
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i = i++;
	}
	if (ns1 > ns2)
		return (s2[i] - s1[i]);
	else
		return (s1[i] - s2[i]);
}