NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJECTS = srcs/ft_strlen.o srcs/ft_strncmp.o srcs/ft_isalpha.o \
srcs/ft_isdigit.o srcs/ft_isalnum.o srcs/ft_isascii.o \
srcs/ft_isprint.o srcs/ft_toupper.o srcs/ft_tolower.o

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