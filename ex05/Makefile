NAME		=	do-op

SRCS		=	src/do_op.c src/ft_atoi.c src/ft_operations.c src/ft_putchar.c src/ft_putnbr.c src/ft_putstr.c

OBJS		=	$(SRCS:c=o)

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror -g

INC			=	-I ./includes

all:		$(OBJS) $(NAME)

%.o:		%.c
				@echo "Compiling $<"
				@$(CC) $(CFLAGS) -c $(INC) $< -o $(<:c=o)
				@echo "Compiling OK!"

$(NAME):	$(OBJS)
				@echo "Creating executable $@"
				@cc $(CFLAGS) $^ -o $@
				@echo "Job's done!"
clean:
				@echo "Cleaning objects..."
				@rm -f $(OBJS) $(BONUS_OBJS)
				@echo "Cleaned up!"

fclean:		clean
				@echo "Cleaning..."
				@rm -f $(NAME)
				@echo "Cleaned up!"

re:			fclean all

.PHONY:		all clean fclean re