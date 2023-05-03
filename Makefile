NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
LIBFLAGS = ar rc
OBJECTS = ft_strlen.o ft_strncmp.o ft_isalpha.o \
ft_isdigit.o ft_isalnum.o ft_isascii.o \
ft_isprint.o ft_toupper.o ft_tolower.o \
ft_strchr.o ft_strrchr.o ft_atoi.o \
ft_strdup.o ft_memset.o ft_bzero.o \
ft_memchr.o

${NAME}: ${OBJECTS}
	@${LIBFLAGS} ${NAME} ${OBJECTS}
	@ranlib ${NAME}

all: ${NAME}

%.o : %.c
	@printf "\rCompiling: $<"
	@gcc -c ${CFLAGS} $< -o $@

fclean: clean
	@rm -f ${NAME}

clean:
	@rm -f ${OBJECTS}

re: fclean all
.PHONY: clean all fclean re