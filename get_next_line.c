/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** gnl
*/

#include "get_next_line.h"

char	*my_realloc(char *src, int pos)
{
	char *str = malloc(sizeof(char) * (pos + 1));
	int cn = 0;

	if (str == NULL)
		return (NULL);
	while (pos >= 0) {
		if (src[cn])
			str[cn] = src[cn];
		cn += 1;
		pos -= 1;
	}
	return (str);
}

int	position(int fd, char *buff, char *str, int cn)
{
	static int pos = READ_SIZE;
	static int cn1 = 0;

	if (cn1 >= pos || cn1 == 0) {
		if ((pos = read(fd, buff, READ_SIZE)) < 0)
			return (-1);
		cn1 = 0;
	}
	if (pos == 0) {
		str[cn] = '\0';
		cn1 = -1;
	}
	if (pos != 0 && buff[cn1] == '\n')
		str[cn] = '\0';
	if (pos != 0 && buff[cn1] != '\n')
		str[cn] = buff[cn1];
	cn1 += 1;
	return (pos);
}

char *process(char *str, int cn)
{
	if (cn % READ_SIZE == 0)
		return (my_realloc(str, READ_SIZE + cn + 1));
	else
		return (str);
}

char	*get_next_line(int fd)
{
	static char buff[READ_SIZE];
	char *str = malloc(sizeof(char) * (READ_SIZE + 1));
	int cn = 0;
	int count = 0;

	if (str == NULL || fd < 0 || READ_SIZE < 0
	|| read(fd, buff, 0) < 0)
		return (NULL);
	count = position(fd, buff, str, cn);
	if (count == 0)
		return (NULL);
	while (str[cn]) {
		str = process(str, cn);
		cn += 1;
		count = position(fd, buff, str, cn);
		if (count < 0)
			return (NULL);
	}
	str[cn] = '\0';
	return (str);
}
