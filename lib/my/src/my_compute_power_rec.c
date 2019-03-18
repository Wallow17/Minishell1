/*
** EPITECH PROJECT, 2017
** my_compute_power_rec.c
** File description:
** 
*/

int	my_compute_power_rec(int nb, int p)
{
	int	res = nb;

	if (p == 0)
		return (1);
	if (p < 0)
		return (0);
	while (p >= 1)
		res = res * my_compute_power_rec(nb, (p - 1));
}
