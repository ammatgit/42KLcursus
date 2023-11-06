# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 14:05:48 by yetan             #+#    #+#              #
#    Updated: 2023/11/02 16:07:16 by yetan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  	=	libft.a			

SRCS  	=	ft_memmove.c \
			ft_memchr.c	\
			ft_strlen.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strnstr.c \
			ft_memcmp.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_memset.c \
			ft_memcpy.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_strdup.c \
        	ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c	\

BNS_SRCS	=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \
		
OBJS	=	$(SRCS:%.c=%.o)

BNS_OBJS =	$(BNS_SRCS:%.c=%.o)	 	

FLAGS	=	-Wall -Wextra -Werror

$(NAME):	
	@gcc $(FLAGS) -c $(SRCS) -I ./
	@ar rc $(NAME) $(OBJS)

all: $(NAME)
	@echo "Make all done"

bonus:	$(NAME)
	@gcc $(FLAGS) -c $(BNS_SRCS) -I ./
	@ar rc $(NAME) $(BNS_OBJS)


clean:
	@rm -f $(OBJS) $(BNS_OBJS)
	@echo "make clean done"

fclean: clean
	@rm -f $(NAME)
	@echo "fclean done"

re: fclean all

.PHONY : all bonus clean fclean re 
