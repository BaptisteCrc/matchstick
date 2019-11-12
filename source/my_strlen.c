/*
** EPITECH PROJECT, 2017
** my_putstrlen
** File description:
** count_and_return_the_number_of_characters
*/

int	my_strlen(char *str)
{
	int	cn = 0;

	while (str[cn] != '\0') {
		cn += 1;
	}
	return (cn);
}
