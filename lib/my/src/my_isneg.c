/*
** EPITECH PROJECT, 2017
** my_isneg.c
** File description:
** 
*/

#include "my.h"

int	my_isneg(int n)
{
	int print;

	if (n < 0) {
		print = 78;
	} else {
		print = 80;
	}
	my_putchar(print);
	my_putchar('\n');
	return (0);
}
