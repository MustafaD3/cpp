NAME=ex_three
CC=$(CXX)
FLAGS=-Wall -Wextra -Werror --std=c++98
SRCS=main.cpp src/Weapon.cpp src/HumanA.cpp src/HumanB.cpp
OBJS=$(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean:clean
	rm -f $(NAME)
re:fclean all

.PHONY:all clean fclean re