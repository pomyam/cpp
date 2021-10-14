NAME = ex00

SRC = Fixed.cpp

DEPS = $(SRC:.cpp=.d)

OBJS = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = Fixed.hpp

all: $(NAME)

$(NAME): $(OBJS) main.cpp
		clang++ $(FLAGS) main.cpp $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS) $(DEPS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re