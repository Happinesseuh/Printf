##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile for project my_printf.c
##

SRCF	=	./sources/my_printf_c.c\
			./sources/my_printf_d_i.c\
			./sources/my_printf_o.c\
			./sources/my_printf_p.c\
			./sources/my_printf_pourcent.c\
			./sources/my_printf_s.c\
			./sources/my_printf_up_s.c\
			./sources/my_printf_u.c\
			./sources/my_printf_x.c\
			./sources/my_printf_up_x.c\
			./sources/my_printf_b.c\
			my_printf.c

SRCL	=		./lib/my/my_getnbr.c\
			./lib/my/my_putchar.c\
			./lib/my/my_put_nbr.c\
			./lib/my/my_putstr.c\
			./lib/my/my_revstr.c\
			./lib/my/my_strlen.c\
			./lib/my/my_str_isprintable.c\
			./lib/my/my_strlowcase.c

SRCT	=		./tests/tests_disp_stdarg.c\
			./tests/tests_sum_numbers.c\
			./tests/tests_sum_strings_length.c

OBJF	=	$(SRCF:.c=.o)

OBJL	=	$(SRCL:.c=.o)

NAME	=	libmy.a


all:	compilib clean

compilib:	$(OBJF) $(OBJL)
		ar rc $(NAME) $(OBJL) $(OBJF)

clean:
	rm -f $(OBJF) $(OBJL)

fclean:	clean
	rm -f $(NAME)

re:	fclean compilib clean

unit_tests:	fclean libmy.a
		gcc -o bin_test $(SRCT) $(SRCF) $(SRCL) --coverage -lcriterion -L./ -lmy

run_tests:	unit_tests
		./bin_test
