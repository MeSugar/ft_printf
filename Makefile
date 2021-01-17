# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelta <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/09 18:16:39 by gdelta            #+#    #+#              #
#    Updated: 2021/01/09 18:16:43 by gdelta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC = 	main_u_int.c ft_printf.c \
		Libft/ft_putchar.c Libft/ft_putnstr.c Libft/ft_strdup.c Libft/ft_strlen.c \
		Parsing/ft_flag_parsing.c Parsing/ft_minus_flag.c Parsing/ft_precision_flag.c Parsing/ft_width_asterisk_flag.c Parsing/ft_width_digit_flag.c Parsing/ft_type_check.c \
		Treatment/ft_char_treatment.c Treatment/ft_variable_treatment.c Treatment/ft_string_treatment.c Treatment/ft_fill_width.c Treatment/ft_u_long_base.c Treatment/ft_pointer_treatment.c Treatment/ft_integer_treatment.c Treatment/ft_itoa_base.c Treatment/ft_u_integer_treatment.c
all:
	gcc -g $(SRC)
	./a.out

