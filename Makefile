# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 23:02:59 by ebouabba          #+#    #+#              #
#    Updated: 2022/04/30 17:07:57 by ebouabba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_FILE =	Utils/ft_print_error.c \
			Utils/ft_atoi.c \
			Utils/ft_split.c \
			Utils/ft_strlen.c \
			Utils/ft_lstlast.c \
			Utils/ft_lstadd_back.c \
			Utils/ft_lstnew.c \
			Utils/ft_lstadd_front.c \
			Utils/free_stack.c \
			Utils/initialisation.c \
			Rules/ft_sa.c \
			Rules/ft_sb.c \
			Rules/ft_ss.c \
			Rules/ft_pa.c \
			Rules/ft_pb.c \
			Rules/ft_ra.c \
			Rules/ft_rb.c \
			Rules/ft_rr.c \
			Rules/ft_rra.c \
			Rules/ft_rrb.c \
			Rules/ft_rrr.c \
			Move/move_stack.c \
			Move/move_and_push.c \
			Move/move_utils.c \
			Sorted/sorted.c \
			Sorted/check_arg.c \
			Sorted/add_stack_b.c \
			Sorted/sort.c \
			Sorted/reglement.c \
			push_swap.c
			
SRC_BNS =	bonus/Utils_bonus/ft_print_error.c \
			bonus/Utils_bonus/ft_atoi.c \
			bonus/Utils_bonus/ft_split.c \
			bonus/Utils_bonus/ft_strlen.c \
			bonus/Utils_bonus/ft_lstlast.c \
			bonus/Utils_bonus/ft_lstadd_back.c \
			bonus/Utils_bonus/ft_lstnew.c \
			bonus/Utils_bonus/ft_lstadd_front.c \
			bonus/Utils_bonus/ft_strncmp.c \
			bonus/Rules_bonus/ft_sa.c \
			bonus/Rules_bonus/ft_sb.c \
			bonus/Rules_bonus/ft_ss.c \
			bonus/Rules_bonus/ft_pa.c \
			bonus/Rules_bonus/ft_pb.c \
			bonus/Rules_bonus/ft_ra.c \
			bonus/Rules_bonus/ft_rb.c \
			bonus/Rules_bonus/ft_rr.c \
			bonus/Rules_bonus/ft_rra.c \
			bonus/Rules_bonus/ft_rrb.c \
			bonus/Rules_bonus/ft_rrr.c \
			bonus/GNL/get_next_line.c \
			bonus/GNL/get_next_line_utils.c \
			bonus/Checker/check_arg_bonus.c \
			bonus/Checker/input_sort.c \
			bonus/Checker/is_sort.c \
			bonus/Checker/free_stack.c \
			bonus/checker.c
		
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HDR = push_swap.h checker.h
OBJ_FILE = $(SRC_FILE:.c=.o)
OBJ_BONUS = $(SRC_BNS:.c=.o)
GREEN = \033[1;36m
RED = \033[1;31m
RM = rm -rf

all : $(NAME)

bonus : checker

$(NAME) : $(OBJ_FILE)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ_FILE) 

checker: $(OBJ_BONUS)
	@$(CC) $(CFLAGS) -o checker $(OBJ_BONUS)

%.o: %.c $(HDR)
	@$(CC) $(CFLAGS) -c $< -o $@
	
clean :
	@$(RM) $(OBJ_FILE) 
	@$(RM) $(OBJ_BONUS)
	@echo "$(RED)--> Object files cleaned"

fclean : clean
	@$(RM) $(NAME)
	@$(RM) checker
	@echo "$(RED)--> Name cleaned"

re : fclean all