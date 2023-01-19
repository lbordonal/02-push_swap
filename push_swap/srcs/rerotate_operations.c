/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rerotate_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:17:56 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/19 17:06:14 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack *stack_a)
{
	int	i;
	int	len;
	int	temp;

	i = 0;
	len = stack_a->len - 1;
	temp = stack_a->stack[len];
	while (len >= 0)
	{
		stack_a->stack[len] = stack_a->stack[len - 1];
		len--;
	}
	stack_a->stack[0] = temp;
}

void	rrb(t_stack *stack_b)
{
	int	i;
	int	len;
	int	temp;

	i = 0;
	len = stack_b->len - 1;
	temp = stack_b->stack[len];
	while (len >= 0)
	{
		stack_b->stack[len] = stack_b->stack[len - 1];
		len--;
	}
	stack_b->stack[0] = temp;
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
