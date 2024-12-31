#colors------------------------------------------------------------------------------
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# Name------------------------------------------------
NAME					= push_swap

# Directories----------------------------------------

LIBFT					= ./ft_printf/libftprintf.a
INC						= include/
SRC_DIR					= src/
OBJ_DIR					= obj/

#Compiler and Cflags---------------------------------

CC 						= gcc
CFLAGS					= -Wall -Werror -Wextra -I
RM						= rm -f

#Source Files---------------------------------------
SRCS 					= $(SRC_DIR)push_swap.c \
						$(SRC_DIR)stack_init.c \
						$(SRC_DIR)init_a_to_b.c \
						$(SRC_DIR)init_b_to_a.c \
						$(SRC_DIR)stack_utils.c \
						$(SRC_DIR)str_utils.c \
						$(SRC_DIR)error.c \
						$(SRC_DIR)sort_three.c\
						$(SRC_DIR)sort_stacks.c \
						$(SRC_DIR)swap.c \
						$(SRC_DIR)push.c \
						$(SRC_DIR)rotate.c \
						$(SRC_DIR)rev_rotate.c\
						$(SRC_DIR)rotate_both.c
#Obj Files-----------------------------------------------------------------
OBJ						= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

#Build rules---------------------------------------------------------------

start:
						make all

$(LIBFT):
						#make -C ./libft
						make -C ./ft_printf


all:					$(NAME)

$(NAME):				$(OBJ) $(LIBFT)
								$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

#Compile object files from source files-------------------------------------------
$(OBJ_DIR)%.o:			$(SRC_DIR)%.c
								mkdir -p $(@D)
								$(CC) $(CFLAGS) $(INC) -c $< -o $@
#Clean----------------------------------------------------------------------------
clean:
								$(RM) -r $(OBJ_DIR)
								make clean -C ./ft_printf

fclean:					clean
								$(RM) $(NAME)
								$(RM) $(LIBFT)
								@echo "$(CYAN)push_swap executable files cleaned!$(DEF_COLOR)"
								@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re:						fclean all
								@echo "$(GREEN)Cleaned and rebuilt everything for push_swap!$(DEF_COLOR)"

.PHONY:					start all clean fclean re
