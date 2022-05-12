/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:45:25 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 16:58:28 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_list
{
	int				content;
	struct t_list	*next;
}					t_list;

int		main(int ac, char **av);

// Checker :
void	check_arg_bonus(t_list **stack_a, char **av);
void	input_sort(t_list **stack_a, t_list **stack_b, char *str);
void	is_sort(t_list **stack_a, t_list **stack_b);
void	free_stack(t_list **stack_a, t_list **stack_b);

// GNL :
char	*get_next_line(int fd);
char	*ft_strjoin(char *var_static, char *var);
char	*ft_substr(char	*s, int start, int len);
char	*ft_get_line(char *var_static);
char	*ft_readfile(char *var_static, int fd);
int		ft_backslash(char *s);
char	*ft_strdup(const char *s1);

// Utils_bonus :
void	print_error(void);
int		ft_strlen(const char *str);
int		ft_atoi(char *s);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
char	**ft_split(char const *s, char c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// Rules_bonus :
void	ft_pa(t_list **stack_b, t_list **stack_a);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list **stack);
void	ft_rb(t_list **stack);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack);
void	ft_rrb(t_list **stack);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_sa(t_list **stack);
void	ft_sb(t_list **stack);
void	ft_ss(t_list **stack_a, t_list **stack_b);

#endif
