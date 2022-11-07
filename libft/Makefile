NAME = libft.a

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

LIBSTATIC = ar -rcs

SOURCES_MANDATORY = ft_isalnum.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isascii.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c


SOURCES_BONUS = $(wildcard ft_lst*.c)

OBJECTS_MANDATORY = $(SOURCES_MANDATORY:.c=.o)

OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

all: ${NAME}

$(NAME): ${OBJECTS_MANDATORY}
	${LIBSTATIC} $@ $^

%.o : %.c
	${CC} ${CC_FLAGS} -c $< -o $@

bonus: ${OBJECTS_BONUS} ${OBJECTS_MANDATORY}
	${LIBSTATIC} ${NAME} $^

re: fclean all

clean:
	rm -f ${OBJECTS_MANDATORY} ${OBJECTS_BONUS}

fclean: clean
	rm -f ${NAME}

.PHONY: all bonus clean fclean re
