# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aloiseau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 13:09:26 by aloiseau          #+#    #+#              #
#    Updated: 2019/11/24 12:42:27 by aloiseau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Werror -Wextra
SRC = 	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memccpy.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_strjoin.c\
		ft_substr.c\
		ft_itoa.c\
		ft_split.c\
		ft_strmapi.c\
		ft_strtrim.c\

INCLUDE = ./

OBJ = 	ft_atoi.o\
		ft_bzero.o\
		ft_calloc.o\
		ft_isalnum.o\
		ft_isalpha.o\
		ft_isascii.o\
		ft_isdigit.o\
		ft_isprint.o\
		ft_memccpy.o\
		ft_memcpy.o\
		ft_memmove.o\
		ft_memset.o\
		ft_memset.o\
		ft_memset.o\
		ft_strchr.o\
		ft_strdup.o\
		ft_strlcat.o\
		ft_strlcpy.o\
		ft_strlen.o\
		ft_strncmp.o\
		ft_strnstr.o\
		ft_strrchr.o\
		ft_tolower.o\
		ft_toupper.o\
		ft_memchr.o\
		ft_memcmp.o\
		ft_putchar_fd.o\
		ft_putendl_fd.o\
		ft_putnbr_fd.o\
		ft_putstr_fd.o\
		ft_strjoin.o\
		ft_substr.o\
		ft_itoa.o\
		ft_split.o\
		ft_strmapi.o\
		ft_strtrim.o\


BON =	ft_lstadd_back_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstnew_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstmap_bonus.c\

BON.o =	ft_lstadd_back_bonus.o\
		ft_lstadd_front_bonus.o\
		ft_lstclear_bonus.o\
		ft_lstdelone_bonus.o\
		ft_lstsize_bonus.o\
		ft_lstiter_bonus.o\
		ft_lstnew_bonus.o\
		ft_lstlast_bonus.o\
		ft_lstmap_bonus.o\

all : $(NAME)

$(NAME) : 	$(OBJ) libft.h
			gcc $(FLAGS) -c $(SRC)
			ar -rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean : 
			/bin/rm -f $(OBJ) $(BON.o)

fclean : 	clean
			/bin/rm -f $(NAME)

re : fclean all

bonus : $(BON.o) libft.h
	gcc $(FLAGS) -c $(BON)
	ar -rc $(NAME) $(BON.o)
	ranlib $(NAME)

.PHONY : clean fclean all re
