NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
LIBF = ar rc
#LINK = -L./ -lft libft.a -I./
OBJECTS = ft_strlen.o ft_strncmp.o ft_isalpha.o \
	ft_isdigit.o ft_isalnum.o ft_isascii.o \
	ft_isprint.o ft_toupper.o ft_tolower.o \
	ft_strchr.o ft_strrchr.o ft_atoi.o \
	ft_strdup.o ft_memset.o ft_bzero.o \
	ft_memchr.o ft_memcpy.o ft_memcmp.o \
	ft_memmove.o ft_strlcpy.o ft_strlcat.o \
	ft_strnstr.o ft_calloc.o ft_substr.o \
	ft_strjoin.o ft_strtrim.o ft_split.o \
	ft_itoa.o ft_strmapi.o ft_striteri.o

%.o : %.c
	@printf "\rCompiling (╮°-°)╮┳━┳ : $<"
	@cc -c ${CFLAGS} $< -o $@ 

${NAME}: ${OBJECTS} 
	@${LIBF} ${NAME} ${OBJECTS} 
	@ranlib ${NAME}

all: ${NAME}

fclean: clean
	@rm -f ${NAME}

clean:
	@echo "(ノಠ益ಠ)ノ彡┻━┻"
	@rm -f ${OBJECTS}

re: fclean all
.PHONY: clean all fclean re