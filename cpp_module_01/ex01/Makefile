NAME=ex_one
CC=$(CXX)
FLAGS=-Wall -Wextra -Werror -std=c++98
SRC=main.cpp src/Zombie.cpp src/zombieHorde.cpp
OBJS=$(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean:clean
	rm -f $(NAME)
re:fclean all

.PHONY:all clean fclean re