NAME		= Violence
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++17

SRCS		= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re