# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 23:33:38 by root              #+#    #+#              #
#    Updated: 2022/05/02 10:36:04 by dantremb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isascii.c ft_strlcpy.c ft_toupper.c ft_memchr.c ft_strcat.c \
		ft_atoi.c ft_isdigit.c ft_putstr.c ft_strlen.c ft_isalnum.c \
		ft_isprint.c ft_strdup.c ft_strncmp.c ft_isalpha.c ft_putchar.c \
		ft_strlcat.c ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_calloc.c ft_memmove.c ft_memcmp.c ft_strnstr.c ft_strchr.c \
		ft_strrchr.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_striteri.c ft_strjoin.c ft_strmapi.c \
		ft_strtrim.c ft_substr.c
		
SRCS_BONUS = ft_lstmap.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c \
		ft_lstlast.c ft_lstsize.c ft_lstadd_front.c ft_lstnew.c

OBJ = $(SRCS:%c=%o)

OBJ_BONUS = $(SRCS_BONUS:%c=%o)

NAME = libft.a

AR = ar

ARFLAGs = rcs

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

REMOVE = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	
bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	$(REMOVE) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(REMOVE) $(NAME)

re:	fclean all