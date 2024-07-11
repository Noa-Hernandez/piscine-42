CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
LIBC	= ar rc
LIBR	= ranlib
NAME	= libft.a
SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= $(SRCS:.c=.o)
INCS	= includes

.PHONY: all clean fclean re

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} -I $(INCS)

$(NAME): $(OBJS)
	$(LIBC) $@ $^
	$(LIBR) $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all