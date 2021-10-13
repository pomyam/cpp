NAME = ex03

SRC = Fixed.cpp

OBJS = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = Fixed.hpp
HEADER = Fixed.hpp

all: $(NAME)

$(NAME): $(OBJS) main.cpp
		clang++ $(FLAGS) main.cpp $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
