/*
** EPITECH PROJECT, 2018
** my_get_nbr
** File description:
** desc
*/

#include "../include/my.h"

int	my_getnbr(char *str)
{
	int	nb = 0;
	int	cn = 0 ;
	
	while (str[cn] != '\0') {
		if (str[cn] >= '0' && str[cn] <= '9') {
			nb = nb * 10;
			nb = nb + str[cn] - '0';
			cn += 1;
		}
		else
			return (nb);
	}
	return (nb);
}
