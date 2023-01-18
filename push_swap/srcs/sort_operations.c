/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:26:13 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/18 17:59:39 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*create_stack_empty(t_list *stack_a)
{
	t_list	*stack_b;
	t_list	*new;
	int		size;
	int		i;

	i = 1;
	size = ft_lstsize(stack_a);
	stack_b = ft_lstnew("|0|");
	while (i < size)
	{
		new = ft_lstnew("|0|");
		ft_lstadd_back(&stack_b, new);
		i++;
	}
	return (stack_b);
}

void	sort_test_one(t_list *stack_a)
{
	int		value;
	int		next;
	t_list	*stack_b;

	value = 0;
	next = 0;
	stack_b = create_stack_empty(stack_a);
	while (stack_a)
	{
		value = ft_atoi(stack_a->content);
		next = ft_atoi(stack_a->next);
		ft_printf("%d", value);
		ft_prinft("%d", next);
		stack_a = stack_a->next;
	}
	ft_printlist(stack_a);
}
