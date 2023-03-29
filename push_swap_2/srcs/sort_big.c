/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:21:41 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/29 14:26:52 by lbordona         ###   ########.fr       */
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
