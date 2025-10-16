NAME = libft.a
SOURCES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_tolower.c ft_toupper.c ft_strlen.c ft_strchr.c ft_atoi.c ft_memset.c \
			ft_bzero.c ft_strrchr.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
			ft_strlcat.c ft_strncmp.c ft_memcmp.c ft_calloc.c ft_strnstr.c

OBJECTS = $(SOURCES:.c=.o)
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f
CC = cc

all: $(NAME)
$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)
%.o: %.c libft.h
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re