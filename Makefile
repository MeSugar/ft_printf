NAME		=	libftprintf.a

CFLAGS		=	-c -Wall -Wextra -Werror

CC			=	gcc

HEADER_PATH =	./Include

LIBFT		=	libft.a

LIBFT_PATH	=	./Libft

SRCS		= ft_printf.c \
				Parsing/ft_flag_parsing.c Parsing/ft_minus_flag.c Parsing/ft_precision_flag.c \
				Parsing/ft_width_asterisk_flag.c Parsing/ft_width_digit_flag.c Parsing/ft_type_check.c \
				Treatment/ft_char_treatment.c Treatment/ft_variable_treatment.c Treatment/ft_string_treatment.c \
				Treatment/ft_fill_width.c Treatment/ft_u_long_base.c Treatment/ft_pointer_treatment.c \
				Treatment/ft_integer_treatment.c Treatment/ft_itoa_base.c Treatment/ft_u_integer_treatment.c Treatment/ft_hexa_treatment.c

O_SRCS		=	ft_printf.o \
				Parsing/ft_flag_parsing.o Parsing/ft_minus_flag.o Parsing/ft_precision_flag.o \
				Parsing/ft_width_asterisk_flag.o Parsing/ft_width_digit_flag.o Parsing/ft_type_check.o \
				Treatment/ft_char_treatment.o Treatment/ft_variable_treatment.o Treatment/ft_string_treatment.o \
				Treatment/ft_fill_width.o Treatment/ft_u_long_base.o Treatment/ft_pointer_treatment.o \
				Treatment/ft_integer_treatment.o Treatment/ft_itoa_base.o Treatment/ft_u_integer_treatment.o Treatment/ft_hexa_treatment.o

OBJS			=	$(SRC:.o=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_PATH)
	cp $(LIBFT_PATH)/$(LIBFT) ./$(NAME)
	$(CC) $(CFLAGS) -I $(HEADER_PATH) $(SRCS)
	ar rc $(NAME) $(OBJS)

clean :
	$(MAKE) clean -C $(LIBFT_PATH)
	rm -rf $(O_SRCS)
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C $(LIBFT_PATH)
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re