NAME	= matchstick

CC	= gcc -g3

RM	= rm -f

SRCS	= ./source/display.c \
	  ./main.c \
	  ./get_next_line.c	\
	  ./source/my_get_nbr.c \
	  ./source/my_strlen.c \
	  ./source/word.c \
	  ./source/my_str_isnum.c \
	  ./source/my_put_nbr.c \
	  ./source/data.c \
	  ./source/player.c \
	  ./source/AI.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
