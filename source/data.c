/*
** EPITECH PROJECT, 2018
** data
** File description:
** data
*/

#include "../include/my.h"

int	*init_data(int *data, int n)
{
	while (n >= 0) {
		data[n] = 2 * n + 1;
		n -= 1;
	}
	return (data);
}

int	verif_tab(int *data, int n)
{
	int	cn = 0;
	int	end = 1;

	while (cn < n) {
		if (data[cn] != 0)
			end = 0;
		cn += 1;
	}
	return (end);
}

void	cycle(int turn, int * data, int n, int match_max)
{
	if ((turn % 2) == 0) {
		display_data(data, n);
		text();
		data = player_turn(data, n ,match_max);
	} else {
		display_data(data, n);
		data = AI_turn(data, n, match_max);
	}
}
