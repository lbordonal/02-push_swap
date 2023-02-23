/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rerotate_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:17:56 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/23 18:38:06 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack *stack_a)
{
	int	len;
	int	temp;
	int	temppos;

	len = stack_a->len - 1;
	temp = stack_a->stack[len];
	temppos = stack_a->index[len];
	while (len >= 0)
	{
		stack_a->stack[len] = stack_a->stack[len - 1];
		stack_a->index[len] = stack_a->index[len - 1];
		len--;
	}
	stack_a->stack[0] = temp;
	stack_a->index[0] = temppos;
	ft_printf("%s\n", "rra");
}

void	rrb(t_stack *stack_b)
{
	int	len;
	int	temp;
	int	temppos;

	len = stack_b->len - 1;
	temp = stack_b->stack[len];
	temppos = stack_b->index[len];
	while (len >= 0)
	{
		stack_b->stack[len] = stack_b->stack[len - 1];
		stack_b->index[len] = stack_b->index[len - 1];
		len--;
	}
	stack_b->stack[0] = temp;
	stack_b->index[0] = temppos;
	ft_printf("%s\n", "rrb");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_printf("%s\n", "rrr");
}
