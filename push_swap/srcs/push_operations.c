/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:53:30 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/19 13:37:32 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 0;
	stack_b->stack[0] = stack_a->stack[0];
	stack_b->finalpos[0] = 0;
	stack_b->len++;
	while (i <= stack_a->len)
	{
		stack_a->stack[i] = stack_a->stack[i + 1];
		i++;
	}
	stack_a->len--;
}

void	pb(t_stack *stack_b, t_stack *stack_a)
{
	int	i;

	i = 0;
	stack_a->stack[0] = stack_b->stack[0];
	stack_a->finalpos[0] = 0;
	stack_a->len++;
	while (i <= stack_b->len)
	{
		stack_b->stack[i] = stack_b->stack[i + 1];
		i++;
	}
	stack_b->len--;
}
