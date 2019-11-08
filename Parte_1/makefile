# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egarcia- <egarcia-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 14:51:00 by egarcia-          #+#    #+#              #
#    Updated: 2019/11/08 17:04:21 by egarcia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c  ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memmove.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strjoin.c ft_strtrim.c ft_substr.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

cc		= gcc

CFLAGS	= -Wall -Werror -Wextra -g

.c.o:	= ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}


all: $(NAME)

$(NAME) :
		gcc $(CFLAGS) -c $(SRCS)
		ar rc $(NAME)     ${OBJS}
		ranlib ${NAME}

clean:
		/bin/rm -f ${OBJS}

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
