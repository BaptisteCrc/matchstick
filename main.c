/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "include/my.h"

int	matchsticks(int	*data, int n, int match_max)
{
	int	end = 0;
	int	turn = 0;

	data = init_data(data, n);
	while (end != 1) {
		cycle(turn, data, n, match_max);
		end = verif_tab(data, n);
		turn += 1;
	}
	display_data(data, n);
	free(data);
	if ((turn % 2) == 0) {
		my_putstr("I lost... snif... but I'll get you next time!!\n");
		return (1);
	} else {
		my_putstr("You lost, too bad...\n");
		return (2);
	}
}

void	text(void)
{
	my_putstr("\nYour turn:\n");
}

int	main(int ac, char **av)
{
	int	n;
	int	*data;
	int	winner;
	
	if (ac != 3 || my_str_isnum(av[1]) == 0 || my_str_isnum(av[2]) == 0)
		return (84);
	n = my_getnbr(av[1]);
	data = malloc(sizeof (int) * (n + 1));
	if (n < 1 || n > 100 || my_getnbr(av[2]) == 0) {
		free(data);
		return (84);
	} else
		winner = matchsticks(data, n, my_getnbr(av[2]));
	return (winner);
}
