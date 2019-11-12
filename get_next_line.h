/*
** EPITECH PROJECT, 2018
** get_next_line.h
** File description:
** gnl.h
*/

#ifndef  READ_SIZE
#define  READ_SIZE (5)
#endif  /* !READ_SIZE  */

#ifndef GET_NEXT_LINE_H_
#define GET_NEXT_LINE_H_

#include <unistd.h>
#include <stdlib.h>

char *my_realloc(char *src, int pos);
int position(int fd, char *buff, char *str, int cn1);
char *process(char *str, int cn);
char *get_next_line(int fd);

#endif /* !GET_NEXT_LINE_H_ */
