/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:26:19 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/23 18:38:16 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack *stack_a)
{
	int	i;
	int	len;
	int	temp;
	int	temppos;

	i = 0;
	len = stack_a->len - 1;
	temp = stack_a->stack[0];
	temppos = stack_a->index[0];
	while (i < stack_a->len)
	{
		stack_a->stack[i] = stack_a->stack[i + 1];
		stack_a->index[i] = stack_a->index[i + 1];
		i++;
	}
	stack_a->stack[len] = temp;
	stack_a->index[len] = temppos;
	ft_printf("%s\n", "ra");
}

void	rb(t_stack *stack_b)
{
	int	i;
	int	len;
	int	temp;
	int	temppos;

	i = 0;
	len = stack_b->len - 1;
	temp = stack_b->stack[0];
	temppos = stack_b->index[0];
	while (i < stack_b->len)
	{
		stack_b->stack[i] = stack_b->stack[i + 1];
		stack_b->index[i] = stack_b->index[i + 1];
		i++;
	}
	stack_b->stack[len] = temp;
	stack_b->index[len] = temppos;
	ft_printf("%s\n", "rb");
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_printf("%s\n", "rr");
}
