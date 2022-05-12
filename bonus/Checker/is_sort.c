/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 02:29:12 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 16:02:02 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	is_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst;

	lst = *stack_a;
	if (*stack_b)
	{
		write(1, "KO\n", 3);
		return ;
	}
	while (lst)
	{
		if (!lst->next)
			break ;
		if (lst->content > lst->next->content)
		{
			write(1, "KO\n", 3);
			return ;
		}
		lst = lst->next;
	}
	write(1, "OK\n", 3);
}
