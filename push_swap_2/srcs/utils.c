/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:10:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/29 18:12:01 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_value_limits(long int num)
{
	if (num > INT_MAX || num < INT_MIN)
		return (1);
	return (0);
}

int	stack_sorted_a(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->len_a - 1)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			return (0);
		else
			i++;
	}
	return (1);
}

int	stack_sorted_b(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->len_b - 1)
	{
		if (stack->stack_b[i] > stack->stack_b[i + 1])
			return (0);
		else
			i++;
	}
	return (1);
}
