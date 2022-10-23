# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohouhou <mohouhou@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 17:49:49 by mohouhou          #+#    #+#              #
#    Updated: 2022/10/23 18:52:23 by mohouhou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME	=		push_swap

LIBFT	=		Libft/libft.a 

SRC		=		push_swap.c \
				push_swap_utils1.c \
				push_swap_utils2.c \
				push_swap_utils3.c \
				push_swap_utils4.c \
				push_swap_utils5.c \
				push_swap_utils6.c \
				push_swap_utils7.c \
				
				
			
CC		=		gcc -g3

CFLAGS	=		-Wall -Werror -Wextra

OBJS	=		$(SRC:.c=.o)

AR		=		ar -rcs

$(NAME)	:	$(OBJS)
			$(MAKE) -C ./Libft
			mkdir -p objsdir
			cp Libft/*.o objsdir
			cp $(OBJS) objsdir
			$(CC) $(CFLAGS) objsdir/*.o -o $(NAME)


			
all		:	$(NAME)

clean	:
			rm -f objsdir/*.o
			rm *.o

fclean	:	clean
			rm -f $(NAME)
			cd Libft && $(MAKE) fclean && cd ..
			

re		:	fclean all