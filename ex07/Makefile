CPP = clang++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = replace

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: $(NAME)
	./replace test Good Great

.PHONY: all clean fclean re test
