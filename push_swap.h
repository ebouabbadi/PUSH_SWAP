/* ************************************************************************** */
/*	                                                                         */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:05:56 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 16:50:13 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

// struct :
typedef struct t_list
{
	int				content;
	int				index;
	int				len;
	int				i;
	int				nbr_mv;
	int				marck;
	int				spin;
	struct t_list	*pos;
	struct t_list	*next;
}	t_list;

int		main(int ac, char **av);

// utils :
int		ft_strlen(const char *str);
char	**ft_split(char const *s, char c);
int		ft_atoi(char *str);
void	print_error(void);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
void	free_stack(t_list **stack_a, t_list **stack_b);
void	initialisation1(t_list **stack_a);
void	initialisation2(t_list **stack_a, t_list **stack_b);
void	initialisation3(t_list **stack_a);

// sorted :
void	check_arg(t_list **stack_a, char **av);
void	add_stack_b(t_list **stack_a, t_list **stack_b);
void	sorted(t_list **stack_a, t_list **stack_b, char **av);
void	ft_sort1(t_list *tp, t_list **stack_a, t_list **stack_b);
void	ft_sort2(t_list *tp, t_list **stack_a, t_list **stack_b);
void	ft_sort3(t_list *tp, t_list **stack_a, t_list **stack_b);
void	ft_sort4(t_list *tp, t_list **stack_a, t_list **stack_b);
void	reglement(t_list **stack_a);

// roles : 
void	ft_ra(t_list **stack);
void	ft_rb(t_list **stack);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_sa(t_list **stack);
void	ft_sb(t_list **stack);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack);
void	ft_rrb(t_list **stack);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_pa(t_list **stack_b, t_list **stack_a);

// move :
void	move_stack(t_list **stack_a, t_list **stack_b);
void	move_and_push(t_list **stack_a, t_list **stack_b);
void	ft_spin_stack(t_list **stack);
void	zero(t_list *tmp);
void	one(t_list *tmp);
int		big(t_list *stack_a, t_list *lst_b);
int		small(t_list *stack_a, t_list *lst_b);
void	nbr_move(t_list *lst);
t_list	*position(t_list *stack_a);

#endif
