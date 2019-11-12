/*
** EPITECH PROJECT, 2017
** my_str_isnum
** File description:
** return 1 if is num
*/

int	my_str_isnum(char *str)
{
	int	cn = 0;

	while (str[cn] != '\0') {
		if (str[cn] > '9' || str[cn] < '0') {
			return (0);
		}
		cn += 1;
	}
	return (1);
}
