/*
** EPITECH PROJECT, 2018
** AI
** File description:
** AI
*/

#include "../include/my.h"
#include "time.h"

int	AI_line(int *data, int n)
{
	int	line;
	int	error = 0;

	srand(time(NULL));
	while (1) {
		line = random() % n + 1;
		if (data[line - 1] == 0)
			error = 1;
		if (error == 0)
			return (line);
		error = 0;
	}
}

int	AI_match(int *data, int line, int match_max)
{
	int	match;
	int	error = 0;

	while (1) {
		match = random() % match_max + 1;
		if (data[line - 1] < match)
			error = 1;
		if (error == 0)
			return (match);
		error = 0;
	}
}
void	AI_display_result(int match, int line)
{
	my_putstr("AI removed ");
	my_putnbr(match);
	my_putstr(" match(es) from line ");
	my_putnbr(line);
	my_putchar('\n');
}

int	*AI_turn(int *data, int n, int match_max)
{
	int	line;
	int	match;

	my_putstr("\nAI's turn...\n");
	line = AI_line(data, n);
	match = AI_match(data, line, match_max);
	AI_display_result(match, line);
	data[line - 1] -= match;
	return (data);
}
