NAME = hi_this_is_brain

SRCS = main.cpp
OBJS := $(SRCS:%.cpp=%.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(OBJS) -o $@

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re