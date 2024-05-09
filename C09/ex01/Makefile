NAME = libft.a

CC = cc

MY_SOURCES =  srcs/ft_putchar.c \
			  srcs/ft_swap.c \
			  srcs/ft_putstr.c \
			  srcs/ft_strlen.c \
			  srcs/ft_strcmp.c \

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CUR_DIR = $(shell pwd)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I includes

$(NAME): $(MY_OBJECTS)
	ar -rc $(NAME) $(MY_OBJECTS)

all: $(NAME)

clean:
	rm $(MY_OBJECTS)

fclean: clean
	rm $(NAME)

re: fclean all
