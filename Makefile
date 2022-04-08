# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almirand <almirand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 11:04:00 by almirand          #+#    #+#              #
#    Updated: 2022/04/08 13:49:48 by almirand         ###   ########.fr        #
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

SRC_BONUS = ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c \
			ft_lstclear.c	ft_lstiter.c	ft_lstmap.c \

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: mandatory bonus

mandatory: $(NAME)

$(NAME):	$(OBJ)
		@echo "Building libft.a mandatory"
		ar -crs $@ $^

bonus: $(BONUS_NAME)

$(BONUS_NAME):	$(OBJ_BONUS)
		@echo "Making bonus"
		ar -crs $(NAME) $^

%.o:	%.c
		$(CC) -c $(FLAGS) $^

clean:
		@echo "Cleaning .objs"
		@rm -f $(OBJ) $(OBJ_BONUS)

fclean:	clean
		@echo "Cleaning libft.a"
		@rm -f $(NAME)

re:	fclean all
