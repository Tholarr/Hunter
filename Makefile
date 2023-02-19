##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC =	./help.c									\
		./src/main.c								\
		./src/events_menu.c							\
		./src/clicks.c								\
		./src/destroy.c								\
		./src/init/init.c							\
		./src/init/init_buttons.c					\
		./src/init/init_entities.c					\
		./src/init/init_pills.c						\
		./src/init/init_text.c						\
		./src/init/init_levels.c					\
		./src/init/init_life.c						\
		./src/game/events_game.c					\
		./src/game/game.c							\
		./src/bonus_stage/bonus_stage.c				\
		./src/bonus_stage/init_bonus_stage.c		\
		./src/bonus_stage/events_bonus_stage.c		\
		./src/bonus_stage/bonus_clock.c				\
		./src/game_over/game_over.c					\
		./src/game_over/init_game_over.c			\
		./src/game_over/events_game_over.c			\
		./src/tutorial/tutorial.c					\
		./src/tutorial/init_tutorial_text.c			\
		./src/tutorial/init_tutorial_sprites.c		\
		./src/tutorial/events_tutorial.c

OBJ =	$(SRC:.c=.o)

NAME =	my_hunter

CSFML = -lcsfml-graphics -lcsfml-system -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		gcc -o $(NAME) $(OBJ) -I ./include/ $(CSFML)
		rm -f $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all
