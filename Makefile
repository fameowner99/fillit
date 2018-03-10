NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRC = algorithm.c all_valid.c coordinates.c figure.c main.c read_and_alloc.c validation.c \
		ft_putstr.c ft_strncmp.c array_of_tetriminos.c

OBJ = algorithm.o all_valid.o coordinates.o figure.o main.o read_and_alloc.o validation.o \
		ft_putstr.o ft_strncmp.o array_of_tetriminos.o

RMOBJ = rm -f $(OBJ)


all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) -o $(NAME) $^

%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

clean:
	$(RMOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
