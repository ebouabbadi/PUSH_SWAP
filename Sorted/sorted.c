/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 23:35:21 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:38:32 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	sort_index(t_list **stack_a)
{
	t_list	*lst;
	t_list	*max;

	lst = *stack_a;
	max = lst;
	while (lst && lst->next)
	{
		if (lst->next->index > lst->index)
		{
			max = lst->next;
		}
		lst = lst->next;
	}
	return (max->i);
}

static	void	subsequence(t_list **stack_a)
{
	int		t;
	t_list	*tmp0;

	t = sort_index(stack_a);
	tmp0 = *stack_a;
	while (tmp0 && t != -1)
	{
		if (tmp0->i == t)
		{
			tmp0->marck = 1;
			t = tmp0->len;
			tmp0 = *stack_a;
		}
		else
			tmp0 = tmp0->next;
	}
}

static	void	sort_longest(t_list **stack_a)
{
	t_list	*node0;
	t_list	*node1;

	node0 = *stack_a;
	while (node0)
	{
		node1 = *stack_a;
		while (node1 && (node1->content != node0->content))
		{
			if (node0->content > node1->content)
			{
				if (node1->index + 1 > node0->index)
				{
					node0->index++;
					node0->len = node1->i;
				}
			}
			node1 = node1->next;
		}
		node0 = node0->next;
	}
}

void	sorted(t_list **stack_a, t_list **stack_b, char **av)
{
	check_arg(stack_a, av);
	sort_longest(stack_a);
	subsequence(stack_a);
	add_stack_b(stack_a, stack_b);
	move_and_push(stack_a, stack_b);
	reglement(stack_a);
}
