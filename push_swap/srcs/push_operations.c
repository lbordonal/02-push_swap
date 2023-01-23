/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:53:30 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/23 21:28:44 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 0;
	stack_b->len++;
	if (stack_b->len > 1)
	{
		while (i <= stack_b->len)
		{
			stack_b->stack[i + 1] = stack_b->stack[i];
			i++;
		}
	}
	i = 0;
	stack_b->stack[i] = stack_a->stack[i];
	while (i <= stack_a->len)
	{
		stack_a->stack[i] = stack_a->stack[i + 1];
		i++;
	}
	stack_a->len--;
	ft_printf("%s\n", "pa");
}

void	pb(t_stack *stack_b, t_stack *stack_a)
{
	int	i;

	i = 0;
	stack_a->len++;
	if (stack_a->len > 1)
	{
		while (i <= stack_a->len)
		{
			stack_a->stack[i + 1] = stack_a->stack[i];
			i++;
		}
	}
	i = 0;
	stack_a->stack[i] = stack_b->stack[i];
	while (i <= stack_b->len)
	{
		stack_b->stack[i] = stack_b->stack[i + 1];
		i++;
	}
	stack_b->len--;
	ft_printf("%s\n", "pb");
}
