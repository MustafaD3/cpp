NAME = phonebook
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS=phonebook.cpp src/class/PhoneBook.cpp src/class/Contact.cpp
OBJS=$(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean:clean
	rm -f $(NAME)
re:fclean all

.PHONY:all clean fclean re