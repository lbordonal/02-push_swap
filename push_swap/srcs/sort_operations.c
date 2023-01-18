/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:26:13 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/18 00:58:34 by lbordona         ###   ########.fr       */
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

}
