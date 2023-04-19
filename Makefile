NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJECTS = srcs/ft_strlen.o srcs/ft_strncmp.o srcs/ft_isalpha.o \
ft_isdigit.o

${NAME}: ${OBJECTS}
	ar rc ${NAME} ${OBJECTS}
	ranlib ${NAME}

all: ${NAME}

%.o : %.c
	gcc -c ${CFLAGS} $< -o $@

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJECTS}

re: fclean all