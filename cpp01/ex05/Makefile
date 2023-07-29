NAME = harl
CC = g++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@ rm -rf $(OBJ)
		@echo "Program compailed";

$(OBJ) :
		@$(CC) $(CFLAGS) $(SRC) -c

clean :
		@rm -rf $(OBJ)
		@rm -rf $(NAME)
		@-rm -rf *.o 2>/dev/null
		@echo "Program NON-compailed";

fclean :
		@rm -rf $(NAME)
		@rm -rf $(OBJ)
		@-rm -rf *.o 2>/dev/null
		@echo "Program NON-compailed";

re : fclean all