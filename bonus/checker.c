/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:43:30 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 17:05:37 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	char	*str;
	t_list	**stack_a;
	t_list	**stack_b;

	stack_a = (t_list **)malloc(sizeof(t_list *));
	stack_b = (t_list **)malloc(sizeof(t_list *));
	*stack_a = NULL;
	*stack_b = NULL;
	if (ac < 2)
		exit (0);
	check_arg_bonus(stack_a, av);
	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break ;
		input_sort(stack_a, stack_b, str);
	}
	is_sort(stack_a, stack_b);
	free_stack(stack_a, stack_b);
	return (0);
}
