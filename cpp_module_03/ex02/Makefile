NAME=FragTrap
CXX=c++
SRCS=main.cpp src/ClapTrap.cpp src/ScavTrap.cpp src/FragTrap.cpp
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
OBJS=$(SRCS:.cpp=.o)

all:$(NAME)
$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
re:fclean all
clean:
	rm -f $(OBJS)
fclean:clean
	rm -f $(NAME)
.PHONY:all re clean fclean