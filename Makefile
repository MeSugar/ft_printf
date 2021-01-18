NAME		=	libftprintf.a

CFLAGS		=	-Wall -Wextra -Werror

CC			=	@gcc

HEADER_PATH =	./Include

LIBFT		=	libft.a

LIBFT_PATH	=	./Libft

SRCS		= ft_printf.c \
				Parsing/ft_flag_parsing.c Parsing/ft_minus_flag.c Parsing/ft_precision_flag.c \
				Parsing/ft_width_asterisk_flag.c Parsing/ft_width_digit_flag.c Parsing/ft_type_check.c \
				Treatment/ft_char_treatment.c Treatment/ft_variable_treatment.c Treatment/ft_string_treatment.c \
				Treatment/ft_fill_width.c Treatment/ft_u_long_base.c Treatment/ft_pointer_treatment.c \
				Treatment/ft_integer_treatment.c Treatment/ft_itoa_base.c Treatment/ft_u_integer_treatment.c Treatment/ft_hexa_treatment.c

OBJS = $(patsubst %.c,%.o,$(SRCS))

all : $(NAME)

$(NAME) : $(OBJS)
		@make -C $(LIBFT_PATH)
		@cp libft/libft.a ./$(NAME)
		@ar rc $(NAME) $(OBJS)

%.o: %.c
		@$(CC) $(FLAGS) -I $(HEADER_PATH) -I libft -c $< -o $@

clean :
		@make -C $(LIBFT_PATH) clean
		@rm -rf $(OBJS)

fclean : clean
		@make -C $(LIBFT_PATH) fclean
		@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re