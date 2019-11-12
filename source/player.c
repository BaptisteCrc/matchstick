/*
** EPITECH PROJECT, 2018
** line
** File description:
** line
*/

#include "../include/my.h"

int	verif_match(int match, int *data, int line, int match_max)
{
	if (match > match_max) {
		my_putstr("Error: you cannot remove more than ");
		my_putnbr(match_max);
		my_putstr(" matches per turn\n");
		return (1);
	}
	if (match > data[line - 1]) {
		my_putstr("Error: not enough matches on this line\n");
		return (1);
	}
	else if (match == 0) {
		my_putstr("Error: you have to remove at least one match\n");
		return (1);
	}
	return (0);
}

int	verif_line(int line, int n)
{
	if (line < 0) {
		my_putstr("Error: invalid input (positive number expected)\n");
		return (1);
	}
	if (line > n) {
		my_putstr("Error: this line is out of range\n");
		return (1);
	}
	return (0);
}

int	player_line(int *data, int n)
{
	int	error = 0;
	int	line;

	my_putstr("Line: ");
	line = my_getnbr(get_next_line(0));
	error = verif_line(line, n);
	if (error == 1) {
		player_line(data,  n);
	}
	return (line);
}

int	player_match(int *data,int n, int line, int match_max)
{
	int	error = 0;
	int	match;
	
	my_putstr("Matches: ");
	match = my_getnbr(get_next_line(0));
	error = verif_match(match, data, line, match_max);
	if (error == 1)
		player_turn(data, n, match_max);
	return (match);
}

int	*player_turn(int *data, int n, int match_max)
{
	int	line;
	int	match;

	line = player_line(data, n);
	match = player_match(data, n, line, match_max);
	display_result(match, line);
	data[line - 1] -= match;
	return (data);
}
