/*
** EPITECH PROJECT, 2018
** word
** File description:
** word_function_display
*/

#include "../include/my.h"

void    my_putchar(char c)
{
	write(1, &c, 1);
}

void    my_putstr(char *str)
{
	int     i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i += 1;
	}
}
