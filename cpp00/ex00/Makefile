NAME		= megaphone

SRCS		= megaphone.cpp

GCC			= clang++

FLAGS		= -Wall -Wextra -Werror

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(GCC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re


