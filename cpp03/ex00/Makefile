SRCS = main.cpp ClapTrap.cpp
OBJS = main.o ClapTrap.o
NAME = program
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all