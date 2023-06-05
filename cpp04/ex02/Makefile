SRCS = main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS = main.o AAnimal.o Cat.o Dog.o WrongAnimal.o WrongCat.o Brain.o
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