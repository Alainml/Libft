# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almirand <almirand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 11:04:00 by almirand          #+#    #+#              #
#    Updated: 2022/04/10 15:59:21 by almirand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BONUS_NAME = libft.a

SRC = ft_calloc.c	ft_isdigit.c	ft_memcpy.c		ft_strlcat.c	ft_strnstr.c	ft_isalnum.c \
	ft_isprint.c	ft_memmove.c	ft_strlcpy.c	ft_strrchr.c	ft_atoi.c		ft_isalpha.c \
	ft_memchr.c		ft_memset.c		ft_strlen.c		ft_tolower.c	ft_bzero.c		ft_isascii.c \
	ft_memcmp.c		ft_strchr.c		ft_strncmp.c	ft_toupper.c	ft_strdup.c		ft_substr.c \
	ft_strjoin.c	ft_strtrim.c	ft_split.c		ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c \
	ft_putstr_fd.c	ft_putendl_fd.c	ft_itoa.c		ft_putnbr_fd.c \

SRC_BONUS = ft_lstnew_bonus.c	ft_lstadd_front_bonus.c	ft_lstsize_bonus.c	ft_lstlast_bonus.c	ft_lstadd_back_bonus.c	ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c	ft_lstiter_bonus.c	ft_lstmap_bonus.c \

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror -I.

all: $(NAME)

%.o:	%.c
		$(CC) -c $(FLAGS) $^

$(NAME):	$(OBJ)
		ar -crs $@ $^

bonus: $(OBJ) $(OBJ_BONUS)
	ar -crs $(NAME) $^

clean:
		@rm -f $(OBJ) $(OBJ_BONUS)

fclean:	clean
		@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus
