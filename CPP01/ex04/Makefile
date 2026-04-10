CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp sed.cpp

OBJ = $(SRC:.cpp=.o)

NAME = sedisforlosers

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re