NAME = ex01

CC = c++
FLAGS = -Wall -Wextra -Werror -I./include -std=c++98

OBJDIR = obj/
SRCDIR = src/
SRCS = $(wildcard $(SRCDIR)*.cpp)
OBJS = $(patsubst $(SRCDIR)%.cpp,$(OBJDIR)%.o,$(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -o $@ $^ $(FLAGS)
	@echo "\033[0;32mCompilation réussie !\033[0m"

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	@mkdir -p $(OBJDIR)
	@$(CC) -c -o $@ $< $(FLAGS)

.PHONY: clean fclean re

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)
	@echo "\033[0;32mC'est propre\033[0m"

re: fclean all
