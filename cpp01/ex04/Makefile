NAME = replace

SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
		clang++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
