NAME = ex_two
CXX = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC=tests.cpp Account.cpp
OBJS=$(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean:clean
	rm -f $(NAME)
re:fclean all

.PHONY:all clean fclean re