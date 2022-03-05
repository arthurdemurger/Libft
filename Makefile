# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 12:59:07 by arthurdemur       #+#    #+#              #
#    Updated: 2022/03/05 22:05:41 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	ft_atoi.c \
				ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memcpy.c \
				ft_memset.c \
				ft_strdup.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_tolower.c \
				ft_toupper.c

OBJS		= $(addprefix srcs/, ${SRCS:.c=.o})

NAME		= test

CFLAGS		= -Wall -Wextra -Werror

%o:			%c
			@gcc ${CFLAGS} -I./includes -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			@gcc ${CFLAGS} $^ -o $@
			@echo "...Everything compiled!"

all:		$(NAME)

clean:
			@rm -f ${OBJS}

fclean:		clean
			@rm -f $(NAME)
			@echo "...Everything removed!"

re:			fclean all
			@echo "...Completed!"

.PHONY:		all clean fclean re print