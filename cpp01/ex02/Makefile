NAME = ex02

SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -Wall -Wextra -Werror

HEADER = Zombie.hpp

all: $(NAME)

$(NAME): $(OBJS)
		clang++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
