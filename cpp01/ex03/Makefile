NAME = ex03

SRC = HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -Wall -Wextra -Werror

HEADER = HumanA.hpp HumanB.hpp Weapon.hpp

all: $(NAME)

$(NAME): $(OBJS) main.cpp
		clang++ $(FLAGS) main.cpp $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
