/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_put_str_np.c
*/

#include "my.h"

int	my_put_pointer(long str)
{
	my_put_str("0x");
	my_put_nbr_base_hex_adress(str);
	return (0);
}