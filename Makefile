# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/09 07:08:11 by odhazzar          #+#    #+#              #
#    Updated: 2020/11/28 21:04:17 by odhazzar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Werror -Wextra
HEADER = libft.h
BASE_SOURCES = \
	ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_itoa.c\
	ft_memccpy.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_putchar_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_split.c\
	ft_strchr.c\
	ft_strdup.c\
	ft_strjoin.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strmapi.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_strtrim.c\
	ft_substr.c\
	ft_tolower.c\
	ft_toupper.c
BONUS_SOURCES = \
	ft_lstadd_back.c\
	ft_lstadd_front.c\
	ft_lstclear.c\
	ft_lstdelone.c\
	ft_lstiter.c\
	ft_lstlast.c\
	ft_lstmap.c\
	ft_lstnew.c\
	ft_lstsize.c
BASE_OBJECTS = $(BASE_SOURCES:%.c=%.o)
BONUS_OBJECTS = $(BONUS_SOURCES:%.c=%.o)

ifdef WITH_BONUS
OBJECTS = $(BASE_OBJECTS) $(BONUS_OBJECTS)
SOURCES = $(BASE_SOURCES) $(BONUS_SOURCES)
else
OBJECTS = $(BASE_OBJECTS)
SOURCES = $(BASE_SOURCES)
endif

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -o $@ -c $<

bonus:
	@$(MAKE) WITH_BONUS=1 all

clean:
	@rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: 
	@$(MAKE) fclean
	@$(MAKE) all