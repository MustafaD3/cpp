NAME=ex_zero
CC=$(CXX)
FLAGS=-Wall -Wextra -Werror -std=c++98
SRC=main.cpp src/Zombie.cpp src/newZombie.cpp src/randomChump.cpp
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