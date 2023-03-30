/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:21:41 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/30 13:44:22 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_crazy_sort(t_stack *stack)
{
	fill_index(stack);
	while (stack->len_a >= 1)
	{
		if (stack->stack_a[0] == 0)
		{
			pb(stack);
			fill_index(stack);
		}
		else
			ra(stack);
	}
	while (stack->len_b > 0)
		pa(stack);
}

void	ft_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	size_a;
	int	max_bits;

	i = 0;
	max_bits = 0;
	while ((stack->bottom >> max_bits) != 0)
		max_bits++;
	while (i <= max_bits)
	{
		size_a = stack->len_a;
		j = 0;
		while (j < size_a)
		{
			if (((stack->stack_a[0] >> i) & 1) == 0)
				pb(stack);
			else
				ra(stack);
			j++;
		}
		pushback_to_a(stack);
		i++;
	}
}
