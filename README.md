# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 23:33:38 by root              #+#    #+#              #
#    Updated: 2022/05/12 00:42:56 by dantremb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

***# libft's functions #***
ft_putchar : Write character to stdout
ft_putstr : Write string to stdout
ft_putchar_fd : Write character on custom FD
ft_putnbr_fd : Write character on custom FD
ft_putstr_fd : Write string to on custon FD 
ft_putendl_fd : Write string then a newline on custom FD
ft_bzero : writing zeros starting at the location pointed in argument.
*ft_calloc : Allocates a block of memory for an array and initializes
				  all its bits to zero.
*ft_memset : Sets the block of memory pointed by ptr to the specified value.
*ft_memcpy : Copies bytes from source directly to the destination.
*ft_memmove : Copies bytes from source to destination. Safer Way.
*ft_memchr : Searches bytes pointed by "s" for a value and returns
				  a pointer to it.
ft_memcmp : Compares s1 to s2, returning zero, negative or positive value.
ft_strncmp : Compares s1 to s2. returning zero, negative or positive value.
ft_strlcpy : Copies source to destination.
ft_strlcat : Appends characters of source to destination.
*ft_strcat : Appends a copy of the source string to the destination string.
*ft_strdup : Returns a pointer to a duplicate of the string pointed by src. 
**ft_split : Make a new string each time we find the separator
				  received as argument. then return an array with those
				  strings.
*ft_strjoin : combine s1 and s2 to one string and return a pointer to it.
*ft_strtrim : removes leading and trailing characters from "set" in "s1"
*ft_substr : Returns a string  initialized from a substring of "src"
ft_striteri : Execute a function on each char from "src"
*ft_strmapi : Make à copy of "src", execute a function on it then
				  return a pointer to it
ft_toupper : Converts char to its uppercase equivalent if possible.
ft_tolower : Converts char to its lowercase equivalent if possible.
ft_isdigit : Checks whether "nbr" is a decimal digit character.
ft_isalpha : Checks whether "nbr" is an alphabetic letter.
ft_isascii : Checks whether "nbr" is in ASCII table.
ft_isalnum : Checks whether "nbr" is a decimal digit or an uppercase
				  or lowercase letter.
ft_isprint : Checks whether "nbr" is a printable character.
ft_strlen : Returns the length of the string str.
*ft_strchr : Returns a pointer to first occurrence of "nbr" in string "str".
*ft_strrchr : Returns a pointer to the last occurrence of "nbr" in string "str".
*ft_strnstr : Returns a pointer to first occurrence of "find" in string "src"					  stop search at a "len" received.
ft_atoi : Convert string to integer.
*ft_itoa : Convert integer to string.
ft_lstdelone : free 1 list element.
ft_lstadd_back : add 1 list element at end.
ft_lstiter : Execute a function on each char of the list.
ft_lstadd_front : add 1 list element at front
ft_lstclear : free all list element from pointer recevied.
ft_lstsize : return how many list element we have.
*ft_lstlast : return last element in list
*ft_lstnew : make new list element.
*ft_lstmap : return a copy of list recieved and execute
				  a function on the copy