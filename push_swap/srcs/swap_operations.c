/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:05:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/23 18:39:16 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *stack_a)
{
	int	temp;

	if (stack_a->len > 1)
	{
		temp = stack_a->stack[0];
		stack_a->stack[0] = stack_a->stack[1];
		stack_a->stack[1] = temp;
		temp = stack_a->index[0];
		stack_a->index[0] = stack_a->index[1];
		stack_a->index[1] = temp;
		ft_printf("%s\n", "sa");
	}
}

void	sb(t_stack *stack_b)
{
	int	temp;

	if (stack_b->len > 1)
	{
		temp = stack_b->stack[0];
		stack_b->stack[0] = stack_b->stack[1];
		stack_b->stack[1] = temp;
		temp = stack_b->index[0];
		stack_b->index[0] = stack_b->index[1];
		stack_b->index[1] = temp;
		ft_printf("%s\n", "sb");
	}
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_printf("%s\n", "ss");
}
