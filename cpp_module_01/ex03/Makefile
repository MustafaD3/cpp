NAME=ex_three
CXX=c++
FLAGS=-Wall -Wextra -Werror --std=c++98
SRCS=main.cpp src/Weapon.cpp src/HumanA.cpp src/HumanB.cpp
OBJS=$(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean:clean
	rm -f $(NAME)
re:fclean all

.PHONY:all clean fclean re