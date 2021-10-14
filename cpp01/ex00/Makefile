NAME = ex00

SRC = newZombie.cpp randomChump.cpp Zombie.cpp

OBJS = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = Zombie.hpp

all: $(NAME)

$(NAME): $(OBJS) main.cpp
		clang++ $(FLAGS) main.cpp $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
