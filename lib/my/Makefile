##
## EPITECH PROJECT, 2025
## printf
## File description:
## No file there, just an epitech header example.
## You can even have multiple lines if you want!
##

SRC	= my_printf.c		\
	my_put_nbr.c		\
	my_putstr.c		\
	my_putchar.c		\
	my_strlen.c		\
	my_revstr.c		\
	conv_func_arr.c		\
	conv_d_i.c		\
	conv_s.c		\
	conv_c.c		\
	conv_percent.c		\
	conv_e.c		\
	conv_e_caps.c		\
	conv_o.c		\
	conv_u.c		\
	conv_x.c		\
	conv_x_caps.c		\
	conv_p.c		\
	conv_f.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	mkdir -p ../../include/
	cp *.h ../../include/
	ar rc $(NAME) $(OBJ)
	cp libmy.a ../../

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../../$(NAME)

re:	fclean $(NAME)
