/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rerotate_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:17:56 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/18 00:56:56 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*get_stack_before_tail(t_list *stack)
{
	while (stack && stack->next && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

void	rra(t_list *stack_a)
{
	t_list	*tail;
	t_list	*stack_before_tail;
	t_list	*temp;

	tail = ft_lstlast(stack_a);
	stack_before_tail = get_stack_before_tail(stack_a);
	temp = stack_a;
	stack_a = tail;
	stack_a->next = temp;
	stack_before_tail->next = NULL;


	ft_printf("%s","rra[A]: ");
	ft_printlist(stack_a);
}

void	rrb(t_list *stack_b)
{
	t_list	*tail;
	t_list	*stack_before_tail;
	t_list	*temp;

	tail = ft_lstlast(stack_b);
	stack_before_tail = get_stack_before_tail(stack_b);
	temp = stack_b;
	stack_b = tail;
	stack_b->next = temp;
	stack_before_tail->next = NULL;


	ft_printf("%s","rrb[B]: ");
	ft_printlist(stack_b);
}

void	rrr(t_list *stack_a, t_list *stack_b)
{
	t_list	*tail_a;
	t_list	*stack_before_tail_a;
	t_list	*temp_a;
	t_list	*tail_b;
	t_list	*stack_before_tail_b;
	t_list	*temp_b;

	tail_a = ft_lstlast(stack_a);
	stack_before_tail_a = get_stack_before_tail(stack_a);
	temp_a = stack_a;
	stack_a = tail_a;
	stack_a->next = temp_a;
	stack_before_tail_a->next = NULL;
	tail_b = ft_lstlast(stack_b);
	stack_before_tail_b = get_stack_before_tail(stack_b);
	temp_b = stack_b;
	stack_b = tail_b;
	stack_b->next = temp_b;
	stack_before_tail_b->next = NULL;

	ft_printf("%s","rrr[A]: ");
	ft_printlist(stack_a);
	ft_printf("%s","rrr[B]: ");
	ft_printlist(stack_b);
}
