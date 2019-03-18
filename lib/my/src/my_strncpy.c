/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** 
*/

char    *my_strncpy(char *str, char *dest, int spos, char c)
{
	int	i = 0;

	while ((str[spos] != c) && (str[spos] != '\0'))
		dest[i++] = str[spos++];
	dest[i] = '\0';
	return (dest);
}