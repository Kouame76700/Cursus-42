# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmichel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 16:18:46 by tmichel           #+#    #+#              #
#    Updated: 2023/05/19 09:09:12 by tmichel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_memcpy.c\
	ft_memset.c\
	ft_strchr.c\
	ft_strncmp.c\
	ft_strrchr.c\
	ft_toupper.c\
	ft_strdup.c\
	ft_calloc.c\
	ft_strlen.c\
	ft_substr.c\
	ft_strlcpy.c\
	

OBJS	=  ${SRCS:.c=.o}

.c.o :
		gcc -Wall -Wextra -Werror -g -I . -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		ar rc ${NAME} ${OBJS}

all : 	${NAME}

clean : 
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}
re : clean all
