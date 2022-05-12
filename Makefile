# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 23:33:38 by root              #+#    #+#              #
#    Updated: 2022/05/12 00:30:43 by dantremb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_FILES = ft_isascii.c ft_strlcpy.c ft_toupper.c ft_memchr.c ft_memmove.c \
		ft_putnbr_fd.c ft_putendl_fd.c ft_lstmap.c ft_lstiter.c ft_lstclear.c \
		ft_strlen.c ft_putchar_fd.c ft_split.c ft_lstadd_front.c ft_strchr.c \
		ft_bzero.c ft_calloc.c ft_memcmp.c ft_strnstr.c ft_lstnew.c ft_itoa.c\
		ft_lstdelone.c ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_atoi.c \
		ft_strcat.c ft_isalnum.c ft_putchar.c ft_memcpy.c ft_putstr_fd.c \
		ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c \
		ft_strncmp.c ft_isalpha.c ft_strlcat.c ft_tolower.c ft_memset.c \
		ft_isdigit.c ft_putstr.c ft_strrchr.c ft_isprint.c ft_strdup.c \

SRCS_PATH = srcs/

OBJS= $(SRCS:%.c=%.o)

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_FILES))

AR = ar

ARFLAGS = rcs

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

REMOVE = rm -rf

COMMIT = $(shell date "+%d %B %T")

all: init $(NAME)
	@printf "Done.\n"
	@echo "Libft Compiled!"
	
init:
	@printf "Compiling."
	
%.o: %.c
	@printf "."
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) -o $@ $^

clean:
	@$(REMOVE) $(OBJS)

fclean: clean
	@$(REMOVE) $(NAME)

re:	fclean all

git:
	git add *
	git commit -m "$(COMMIT)"
	git push