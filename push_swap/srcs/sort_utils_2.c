/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:58:44 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/30 21:06:25 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pushback_to_a(t_stack *stack)
{
	while (stack->len_b > 0)
		pa(stack);
}

/* ---not working--- */
void	pushback_to_a_smarter(t_stack *stack, int pos)
{
	int	i;
	int	size_b;

	if ((stack_sorted_a(stack)) && (stack_sorted_b(stack)))
	{
		while (stack->len_b > 0)
			pa(stack);
		return ;
	}
	size_b = stack->len_b;
	i = 0;
	while (i < size_b && stack->len_b)
	{
		if (((stack->stack_b[0] >> (pos + 1)) & 1) == 0)
			rb(stack);
		else
			pa(stack);
		i++;
	}
}
