##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##


FILE_LIST =		main.c \
				manage_event.c \
				background.c \
				duck.c \
				mouse.c \
				kill_duck.c \
				all_fonctions.c \
				fireball.c \

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