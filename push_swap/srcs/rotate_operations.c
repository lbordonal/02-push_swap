/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:26:19 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/17 17:04:23 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_list *stack_a)
{
	t_list	*temp;

	temp = ft_lstlast(stack_a);
	temp->next = stack_a;
	stack_a = stack_a->next;
	temp->next->next = NULL;
	ft_printf("%s","ra[A]: ");
	ft_printlist(stack_a);
}

void	rb(t_list *stack_b)
{
	t_list	*temp;

	temp = ft_lstlast(stack_b);
	temp->next = stack_b;
	stack_b = stack_b->next;
	temp->next->next = NULL;
	ft_printf("%s","rb[B]: ");
	ft_printlist(stack_b);
}

void	rr(t_list *stack_a, t_list *stack_b)
{
	t_list	*temp_a;
	t_list	*temp_b;

	temp_a = ft_lstlast(stack_a);
	temp_a->next = stack_a;
	stack_a = stack_a->next;
	temp_a->next->next = NULL;
	temp_b = ft_lstlast(stack_b);
	temp_b->next = stack_b;
	stack_b = stack_b->next;
	temp_b->next->next = NULL;
	ft_printf("%s","rr[A]: ");
	ft_printlist(stack_a);
	ft_printf("%s","rr[B]: ");
	ft_printlist(stack_b);
}
