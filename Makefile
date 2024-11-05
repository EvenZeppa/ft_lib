CC = cc
CFLAGS =  -Wall -Wextra -Werror -I${INCLUDES}
SRCS_DIR = srcs/
INCLUDES = includes/
SRCS =	\
		${SRCS_DIR}ft_isalpha.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a

all : ${NAME}

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all
