NAME = Animal

SRCS = AAnimal.cpp \
	Brain.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	main.cpp \

CFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

CC = c++

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
