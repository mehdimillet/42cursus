# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: memillet <memillet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/17 20:58:56 by memillet          #+#    #+#              #
#    Updated: 2025/11/19 01:27:37 by memillet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ======================= #
#        VARIABLES        #
# ======================= #

NAME = push_swap

SOURCES = ft_parsing.c ft_push_swap.c ft_main.c ft_sort.c ft_utils.c\
			ft_utils2.c ft_push.c ft_reverse_rotate.c ft_rotate.c ft_swap.c 

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror 

RM = rm -f

LIBFT = Libft/libft.a
PRINTF = ft_printf/libftprintf.a

# ======================= #
#         COULEURS        #
# ======================= #

GREEN = \033[1;32m
RED = \033[1;31m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

# ======================= #
#      BARRE CHARGEMENT   #
# ======================= #

define LOADING_BAR
	@printf "$(BLUE)Compilation en cours : ["
	@for i in $$(seq 1 30); do \
		printf "#"; \
		sleep 0.03; \
	done
	printf "]$(RESET)\n"
endef

# ======================= #
#         COMMANDES       #
# ======================= #

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(MAKE) -sC ./Libft
	@$(MAKE) -sC ./ft_printf
	$(call LOADING_BAR)
	@$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT) $(PRINTF) -o $(NAME)
	@printf "$(GREEN)✔ Compilation terminée : $(NAME) généré !$(RESET)\n"

%.o: %.c ft_push_swap.h
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(YELLOW)• Compilation de $< terminée.$(RESET)\n"

clean:
	@$(MAKE) clean -sC ./Libft
	@$(MAKE) clean -sC ./ft_printf
	@$(RM) $(OBJECTS)
	@printf "$(RED)✖ Fichiers objets supprimés.$(RESET)\n"

fclean: clean
	@$(MAKE) fclean -sC ./Libft
	@$(MAKE) fclean -sC ./ft_printf
	@$(RM) $(NAME)
	@printf "$(RED)✖ Exécutable supprimé : $(NAME)$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
