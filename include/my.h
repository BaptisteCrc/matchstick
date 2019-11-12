/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	display_data(int *tab, int n);
void	display_result(int match, int line);
int	*init_data(int *tab, int n);
int	verif_tab(int *data, int n);
int	*player_turn(int *data, int n, int match_max);
int	player_match(int *data, int n, int line, int match_max);
void	cycle(int turn, int * data, int n, int match_max);
int	verif_line(int line, int n);
int	player_line(int *data, int n);
int	my_getnbr(char *str);
int     my_strlen(char *str);
void	my_putstr(char *str);
void	my_putnbr(int nb);
void	my_putchar(char c);
void	my_putstr(char *str);
int	 my_str_isnum(char *str);
void	text(void);
int	AI_line(int *data, int n);
int	AI_match(int *data, int line, int match_max);
int	*AI_turn(int *data, int n, int match_max);
void	AI_display_result(int match, int line);
int	*AI_turn(int *data, int n, int match_max);
char	*get_next_line(int fd);
