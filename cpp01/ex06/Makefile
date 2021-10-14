NAME = ex06

SRC = Karen.cpp

OBJS = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -Wall -Wextra -Werror

HEADER = Karen.hpp

all: $(NAME)

$(NAME): $(OBJS) main.cpp
		clang++ $(FLAGS) main.cpp $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
