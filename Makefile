# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 23:33:38 by root              #+#    #+#              #
#    Updated: 2022/05/11 14:08:17 by dantremb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isascii.c \
		ft_strlcpy.c \
		ft_toupper.c \
		ft_memchr.c \
		ft_atoi.c \
		ft_isdigit.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_isprint.c \
		ft_strdup.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_strlcat.c \
		ft_tolower.c \
		ft_memset.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_strcat.c \
		ft_isalnum.c \
		ft_putchar.c\
		ft_memcpy.c \
		ft_strchr.c \
		ft_putnbr_fd.c \
		ft_putendl_fd.c \
		ft_lstmap.c \
		ft_lstiter.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstadd_back.c \
		ft_lstlast.c \
		ft_lstsize.c \
		ft_lstadd_front.c \
		ft_lstnew.c \
		
SPATH = src/

OBJ = $(SRCS:$(addprefix $(SPATH).c)=$(addprefix $(SPATH).o))

NAME = libft.a

AR = ar

ARFLAGS = rcs

CC = @gcc

CFLAGS = -Wall -Wextra -Werror

REMOVE = rm -f

TIME = $(shell date "+%d %B %T")

all: $(NAME)
	
$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	
clean:
	@$(REMOVE) $(OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

re:	fclean all

git:
	@(git add .)
	@git commit -m "$(TIME)"
	@(git push)
