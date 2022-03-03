# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthurdemurger <arthurdemurger@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 12:59:07 by arthurdemur       #+#    #+#              #
#    Updated: 2022/03/03 17:03:45 by arthurdemur      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		:= 	do_op.c calcul.c basics.c

OBJS		:= $(addprefix srcs/, ${SRCS:.c=.o})

NAME		= do-op

CFLAGS		= -Wall -Wextra -Werror

%o:			%c
			@gcc ${CFLAGS} -I./includes -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			@gcc ${CFLAGS} $^ -o $@
			@echo "...Everything compiled!"

all:		${NAME}

clean:
			@rm -f ${OBJS}

fclean:		clean
			@rm -f ${NAME}
			@echo "...Everything removed!"

re:			fclean all
			@echo "...Completed!"

.PHONY:		all clean fclean re print