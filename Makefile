# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 12:59:07 by arthurdemur       #+#    #+#              #
#    Updated: 2022/03/03 18:28:49 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		:= 	*.c

OBJS		:= $(addprefix srcs/, ${SRCS:.c=.o})

NAME		= do-op

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