NAME = ft_printf
SRCS = ./srcs/main.c
LIB = ./srcs/libft/
HEADER = ./includes/





all: $(NAME)

$(NAME):
	make -C $(LIB)
	gcc $(SRCS) -I $(HEADER) -L$(LIB) -lft -o $(NAME)

clean:
	make fclean -C $(LIB)

fclean: clean 
	rm -rf $(NAME)

re: fclean all