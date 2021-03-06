##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##


FILE_LIST =		main.c \
				background.c \
				manage_event.c \
				dragon.c \
				mouse.c \
				menu.c \
				menu_event.c \
				destroy.c \
				game.c \
				music.c \

SRC		= 		$(FILE_LIST)

OBJ		=		$(SRC:.c=.o)

NAME 	= 		my_hunter

CFLAGS  = -Wextra -Wall -lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-system -g3

all: 	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:		fclean all