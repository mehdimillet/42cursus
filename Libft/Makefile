NAME = libft.a

# ======================= #
#        VARIABLES        #
# ======================= #

# Fonctions ASCII
SOURCES_ASCII = function_ascii/ft_isalnum.c \
				function_ascii/ft_isalpha.c \
				function_ascii/ft_isascii.c \
				function_ascii/ft_isdigit.c \
				function_ascii/ft_isprint.c \
				function_ascii/ft_tolower.c \
				function_ascii/ft_toupper.c

# Fonctions de copie/concaténation/comparaison
SOURCES_COPY_CAT_COMP = function_copy_cat_comp/ft_memset.c \
						function_copy_cat_comp/ft_memcpy.c \
						function_copy_cat_comp/ft_memmove.c \
						function_copy_cat_comp/ft_strlcpy.c \
						function_copy_cat_comp/ft_strlcat.c \
						function_copy_cat_comp/ft_strncmp.c \
						function_copy_cat_comp/ft_memcmp.c \
						function_copy_cat_comp/ft_strdup.c \
						function_copy_cat_comp/ft_substr.c \
						function_copy_cat_comp/ft_strjoin.c \
						function_copy_cat_comp/ft_strtrim.c \
						function_copy_cat_comp/ft_strmapi.c

# Fonctions utilitaires
SOURCES_UTILS = function_utils/ft_strlen.c \
				function_utils/ft_strchr.c \
				function_utils/ft_atoi.c \
				function_utils/ft_bzero.c \
				function_utils/ft_strrchr.c \
				function_utils/ft_calloc.c \
				function_utils/ft_strnstr.c \
				function_utils/ft_memchr.c \
				function_utils/ft_split.c \
				function_utils/ft_striteri.c \
				function_utils/ft_putendl_fd.c \
				function_utils/ft_itoa.c \
				function_utils/ft_putnbr_fd.c

# Fonctions d'écriture
SOURCES_WRITE = function_write/ft_putchar_fd.c \
				function_write/ft_putstr_fd.c

# Toutes les sources
SOURCES = $(SOURCES_ASCII) $(SOURCES_COPY_CAT_COMP) $(SOURCES_UTILS) $(SOURCES_WRITE)
OBJECTS = $(SOURCES:.c=.o)

PRINTF = function_write/ft_printf

# Compilateur et flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f

# ======================= #
#         COULEURS        #
# ======================= #

GREEN = \033[1;32m
RED = \033[1;31m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

# ======================= #
#         COMMANDES       #
# ======================= #

# Règles
all: $(NAME)

$(NAME): $(OBJECTS)
	@$(MAKE) -sC ./$(PRINTF)
	@$(AR) $(NAME) $(OBJECTS)
	@printf "$(GREEN)✔ Compilation terminée$(RESET)\n"
%.o: %.c libft.h
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@$(MAKE) clean -sC $(PRINTF)
	@$(RM) $(OBJECTS)
	@printf "$(RED)✖ Fichiers objets supprimés.$(RESET)\n"

fclean: clean
	@$(MAKE) fclean -sC $(PRINTF)
	@$(RM) $(NAME)
	@printf "$(RED)✖ Exécutable supprimé$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re