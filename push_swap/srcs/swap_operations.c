/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:05:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/18 18:00:36 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_list *stack_a)
{
	int		size;
	t_list	*temp;

	size = ft_lstsize(stack_a);
	if (size > 1)
	{
		temp = stack_a->next;
		stack_a->next = temp->next;
		temp->next = stack_a;
		stack_a = temp;
		ft_printf("%s", "sa[A]: ");
		ft_printlist(stack_a);
	}
}

void	sb(t_list *stack_b)
{
	int		size;
	t_list	*temp;

	size = ft_lstsize(stack_b);
	if (size > 1)
	{
		temp = stack_b->next;
		stack_b->next = temp->next;
		temp->next = stack_b;
		stack_b = temp;
		ft_printf("%s", "sb[B]: ");
		ft_printlist(stack_b);
	}
}

void	double_swap(t_list *stack_a, t_list *stack_b)
{
	int		size_a;
	int		size_b;
	t_list	*temp_a;
	t_list	*temp_b;

	size_a = ft_lstsize(stack_a);
	size_b = ft_lstsize(stack_b);
	if (size_a > 1)
	{
		temp_a = stack_a->next;
		stack_a->next = temp_a->next;
		temp_a->next = stack_a;
		stack_a = temp_a;
		ft_printf("%s", "double_swap[A]: ");
		ft_printlist(stack_a);
	}
	if (size_b > 1)
	{
		temp_b = stack_b->next;
		stack_b->next = temp_b->next;
		temp_b->next = stack_b;
		stack_b = temp_b;
		ft_printf("%s", "double_swap[B]: ");
		ft_printlist(stack_b);
	}
}
