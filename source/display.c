/*
** EPITECH PROJECT, 2018
** display
** File description:
** display
*/

#include "../include/my.h"

void	special_line(int n)
{
	int	cn = 0;

	while (cn < (2 * n + 1)) {
		my_putchar('*');
		cn += 1;
	}
	my_putchar('\n');
}

void	manage_space(int n, int cn)
{
	int	cn1 = 0;

	while (cn1 < (n - cn - 1)) {
		my_putchar(' ');
		cn1 += 1;
	}
}

void	manage_pipe(int *data, int cn)
{
	int	cn1 = 0;

	while (cn1 < data[cn]) {
		my_putchar('|');
		cn1 += 1;
	}
}

void	display_data(int *data, int n)
{
	int	cn = 0;
	int	cn1 = 0;

	special_line(n);
	while (cn < n) {
		my_putchar('*');
		manage_space(n, cn);
		manage_pipe(data, cn);
		while (cn1 < ((2 * cn + 1) - data[cn])) {
			my_putchar(' ');
			cn1 += 1;
		}
		manage_space(n, cn);
		my_putchar('*');
		my_putchar('\n');
		cn += 1;
		cn1 = 0;
	}
	special_line(n);
}

void	display_result(int match, int line)
{
	my_putstr("Player removed ");
	my_putnbr(match);
	my_putstr(" match(es) from line ");
	my_putnbr(line);
	my_putchar('\n');
}
