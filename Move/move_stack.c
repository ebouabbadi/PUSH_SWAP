/* ************************************************************************** */
/*	                                                                          */
/*                                                        :::      ::::::::   */
/*   move_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:09:41 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:17:06 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	void	ft_add_nbr_move(t_list **stack_b)
{
	t_list	*lst_b;

	lst_b = *stack_b;
	while (lst_b)
	{
		if (lst_b->spin == lst_b->pos->spin)
		{
			if (lst_b->nbr_mv > lst_b->pos->nbr_mv)
				lst_b->index = lst_b->pos->nbr_mv
					+ (lst_b->nbr_mv - lst_b->pos->nbr_mv);
			else
				lst_b->index = lst_b->nbr_mv
					+ (lst_b->pos->nbr_mv - lst_b->nbr_mv);
		}
		else
			lst_b->index = lst_b->nbr_mv + lst_b->pos->nbr_mv;
		lst_b = lst_b->next;
	}
}

t_list	*position(t_list *stack_a)
{
	t_list	*pos;
	t_list	*lst;

	lst = stack_a;
	pos = stack_a;
	while (lst && lst->next)
	{
		if (lst->next->content < pos->content)
			pos = lst->next;
		lst = lst->next;
	}
	return (pos);
}

void	nbr_move(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	i = i % 2;
	tmp = lst;
	if (i == 0)
		zero(tmp);
	else
		one(tmp);
}

static	void	init(t_list **stack_a, t_list **stack_b)
{
	initialisation2(stack_a, stack_b);
	ft_spin_stack(stack_a);
	ft_spin_stack(stack_b);
	nbr_move(*stack_a);
	nbr_move(*stack_b);
}

void	move_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst_a;
	t_list	*lst_b;

	init(stack_a, stack_b);
	lst_b = *stack_b;
	lst_a = *stack_a;
	while (lst_b)
	{
		lst_b->pos = *stack_a;
		if (lst_b->content < lst_a->content
			&& lst_b->content > ft_lstlast(lst_a)->content)
			lst_b->pos = *stack_a;
		lst_a = (*stack_a);
		if (big(lst_a, lst_b) == 0 || small(lst_a, lst_b) == 0)
			lst_b->pos = position(lst_a);
		while (lst_a && lst_a->next)
		{
			if (lst_a->content < lst_b->content
				&& lst_a->next->content > lst_b->content)
					lst_b->pos = lst_a->next;
			lst_a = lst_a->next;
		}
		lst_b = lst_b->next;
	}
	ft_add_nbr_move(stack_b);
}
