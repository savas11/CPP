NAME = aform
CC = g++
FLAG = -Wall -Wextra -Werror 
SOURCE = $(wildcard *.cpp)
OBJECT = $(patsubst %.cpp, %.o, $(SOURCE))

all: $(NAME)

$(NAME): $(OBJECT)
	@$(CC) $(FLAG) $(OBJECT) -o $(NAME)
	@rm -rf $(OBJECT)
	@echo "Program compailed";

fclean: clean
	@rm -rf $(NAME)
	@echo "Program NON-compailed";

clean:
	@rm -rf $(OBJECT)

re: fclean all