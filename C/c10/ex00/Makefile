
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ./display.c
OBJS	= ${SRCS:.c=.o}
NAME	= ft_display_file

.c.o: 
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	$(CC) $(CFLAGS) ${OBJS} -o ${NAME}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re