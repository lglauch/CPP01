NAME := program

CC := c++

CPPFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re