NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRCS =	operations/push.c \
	operations/rotate.c \
	operations/rrotate.c \
	operations/swap.c \
	srcs/casethree.c \
	srcs/checkif.c \
	srcs/fillstack.c \
	srcs/indexop.c \
	srcs/lastcase.c \
	srcs/main.c \
	llst/ft_lstadd_b.c \
	llst/ft_lstlast.c \
	llst/ft_lstnew.c \
	llst/ft_lstsize.c \
	libft/ft_isdigit.c \
	libft/ft_putstr_fd.c \
	libft/ft_split.c \
	libft/ft_strjoin.c \
	libft/ft_atol.c \
	libft/ft_putchar_fd.c \
	libft/ft_strlen.c 

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

