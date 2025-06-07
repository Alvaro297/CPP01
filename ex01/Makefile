NAME	= hordeBrainzz

CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98

INC_PATH	= ./includes/
INC			= -I $(INC_PATH)

SRC_PATH	=
SRC			=	Zombie.cpp \
				zombieHorde.cpp \
				main.cpp			
SRCS		=  $(SRC)

OBJ_PATH	= ./objects/
OBJ			= $(SRC:.cpp=.o)
OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))

# Build rule
all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(INC)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

# Remake
re: fclean all

.PHONY: all re clean fclean