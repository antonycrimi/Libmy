##
## EPITECH PROJECT, 2019
## Makefile LibC
## File description:
## Makefile
##

ECHO	=	/bin/echo -e
DEFAULT	=	"\e[0m"
BOLD_T	=	"\e[1m"
DIM_T	=	"\e[2m"
UNDLN_T	=	"\e[4m"
BLACK_C	=	"\e[30m"
RED_C	=	"\e[31m"
GREEN_C	=	"\e[32m"
YELLO_C	=	"\e[33m"
BLUE_C	=	"\e[34m"
MAGEN_C	=	"\e[35m"
CYAN_C	=	"\e[36m"
WHITE_C	=	"\e[97m"
DEFAULT_C	=	"\e[39m"
LIGHT_GREY	=	"\e[37m"
DARK_GREY	=	"\e[90m"
LIGHT_RED	=	"\e[91m"
LIGHT_GREEN	=	"\e[92m"
LIGHT_YELLO	=	"\e[93m"
LIGHT_BLUE	=	"\e[94m"
LIGHT_MAGEN	=	"\e[95m"
LIGHT_CYAN	=	"\e[96m"
LINE_RETURN	=	$(ECHO) ""

SRC	= 	my_cat.c	\
		my_compute_factorial_rec.c	\
		my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_getnbr.c	\
		my_int_to_string.c	\
		my_is_prime.c	\
		my_is_sorted.c	\
		my_isneg.c	\
		my_putchar.c	\
		my_putnbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_showstr.c	\
		my_sort_int_array.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strdup.c	\
		my_strlen.c \
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_strupcase.c	\
		my_swap.c

OBJ	=	$(SRC:.c=.o)

NAME 	=	libmy.a

CFLAGS 	=	-Wall -Wextra -I../../includes/

all:	message $(NAME) done_print
	cp libmy.h ../../includes
	cp libmy.a ../

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

message:
	@$(LINE_RETURN)
	@$(LINE_RETURN)
	@$(ECHO) $(BOLD_T)$(CYAN_C)"██╗     ██╗██████╗ ███╗   ███╗██╗   ██╗"$(DEFAULT)
	@$(ECHO) $(BOLD_T)$(CYAN_C)"██║     ██║██╔══██╗████╗ ████║╚██╗ ██╔╝"$(DEFAULT)
	@$(ECHO) $(BOLD_T)$(CYAN_C)"██║     ██║██████╔╝██╔████╔██║ ╚████╔╝ "$(DEFAULT)
	@$(ECHO) $(BOLD_T)$(CYAN_C)"██║     ██║██╔══██╗██║╚██╔╝██║  ╚██╔╝  "$(DEFAULT)
	@$(ECHO) $(BOLD_T)$(CYAN_C)"███████╗██║██████╔╝██║ ╚═╝ ██║   ██║   "$(DEFAULT)
	@$(ECHO) $(BOLD_T)$(CYAN_C)"╚══════╝╚═╝╚═════╝ ╚═╝     ╚═╝   ╚═╝   "$(DEFAULT)
	@$(LINE_RETURN)

done_print:
	@$(LINE_RETURN)
	@$(ECHO) $(LIGHT_CYAN)"BUILD $(NAME) COMPLETE!"$(DEFAULT)
	@$(ECHO) $(LIGHT_CYAN)"-----------------------"$(DEFAULT)
	@$(LINE_RETURN)
