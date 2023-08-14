NAME = $(BINDIR)/libft.a
CFLAGS = -Wall -Wextra -Werror
LIBF = ar rc
SRCDIR = src
OBJDIR = obj
DEPDIR = dep
BINDIR = bin

BOOLS_SRCS = src/bools/ft_isalpha.c \
             src/bools/ft_isdigit.c \
             src/bools/ft_isalnum.c \
             src/bools/ft_isascii.c \
             src/bools/ft_isprint.c \

STRINGS_SRCS = src/strings/ft_strlen.c \
               src/strings/ft_strncmp.c \
               src/strings/ft_strcmp.c \
               src/strings/ft_toupper.c \
               src/strings/ft_tolower.c \
               src/strings/ft_strchr.c \
               src/strings/ft_strrchr.c \
               src/strings/ft_strdup.c \
               src/strings/ft_strlcpy.c \
               src/strings/ft_strlcat.c \
               src/strings/ft_strnstr.c \
               src/strings/ft_substr.c \
               src/strings/ft_strjoin.c \
               src/strings/ft_strtrim.c \
               src/strings/ft_split.c \
               src/strings/ft_itoa.c \
               src/strings/ft_strmapi.c \
               src/strings/ft_striteri.c \
               src/strings/ft_atoi.c \

OUTPUT_SRCS =  src/output/ft_putchar_fd.c \
               src/output/ft_putstr_fd.c \
               src/output/ft_putendl_fd.c \
               src/output/ft_putnbr_fd.c \

MEMORY_SRCS = src/memory/ft_memset.c \
              src/memory/ft_bzero.c \
              src/memory/ft_memchr.c \
              src/memory/ft_memcpy.c \
              src/memory/ft_memcmp.c \
              src/memory/ft_memmove.c \
              src/memory/ft_calloc.c

LIST_SRCS = src/list/ft_lstnew.c \
            src/list/ft_lstadd_front.c \
            src/list/ft_lstsize.c \
            src/list/ft_lstlast.c \
            src/list/ft_lstadd_back.c \
            src/list/ft_lstdelone.c \
            src/list/ft_lstclear.c \
            src/list/ft_lstiter.c \
            src/list/ft_lstmap.c \

PRINTF_SRCS = src/ft_printf/ft_printf.c \
            src/ft_printf/ft_printc.c \
            src/ft_printf/ft_prints.c \
            src/ft_printf/ft_printp.c \
            src/ft_printf/ft_printu.c \
            src/ft_printf/ft_printid.c \
            src/ft_printf/ft_printhex.c \

GNL_SRCS = src/gnl/get_next_line_utils.c \
           src/gnl/get_next_line.c 

SOURCES = $(BOOLS_SRCS) $(STRINGS_SRCS) $(MEMORY_SRCS) \
            $(LIST_SRCS) $(OUTPUT_SRCS) $(PRINTF_SRCS) \
            $(GNL_SRCS)

OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))

DEPS = $(patsubst $(OBJDIR)/%.o,$(DEPDIR)/%.d,$(OBJECTS))

all: ${NAME}

$(OBJDIR)/%.o: $(SRCDIR)/%.c include/libft.h Makefile
	@printf "\rCompiling (╮°-°)╮┳━┳ : $<"
	@mkdir -p $(@D)
	@mkdir -p $(patsubst $(OBJDIR)/%,$(DEPDIR)/%,$(@D))
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@ && mv $(@:%.o=%.d) $(patsubst $(OBJDIR)/%,$(DEPDIR)/%,$(@:%.o=%.d))

${NAME}: ${OBJECTS} 
	@mkdir -p $(@D)
	@${LIBF} ${NAME} ${OBJECTS}
	@ranlib ${NAME}

-include $(DEPS)

fclean: clean
	@rm -rf ${BINDIR}

clean:
	@echo "(ノಠ益ಠ)ノ彡┻━┻"
	@rm -rf ${OBJDIR} $(DEPDIR)

re: fclean all

git: fclean
	@echo "Commit:"
	@read MSG; \
	git commit -am "$$MSG"
	git push

.PHONY: clean all fclean re
