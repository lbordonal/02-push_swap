/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:56:16 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/29 14:31:43 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	double_pb_and_sort(t_stack *stack) //just to short the lines
{
	pb(stack);
	pb(stack);
	ft_sort_two_b(stack);
	if (stack_sorted(stack) == 0)
		ft_sort_three(stack);
}

void	rra_pa_ra_ra(t_stack *stack) //just to short the lines
{
	rra(stack);
	pa(stack);
	ra(stack);
	ra(stack);
}

void	ft_transform(t_stack *stack, int *temp)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->len_a)
	{
		j = 0;
		while (j < stack->len_a)
		{
			if (stack->stack_a[i] == temp[j])
			{
				stack->stack_a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	fill_index(t_stack *stack)
{
	int	i;
	int	*temp_stack;
	int	temp;

	i = 0;
	temp_stack = ft_calloc(stack->len_a, sizeof(int));
	if (!temp_stack)
		return ;
	temp_stack = ft_memcpy(temp_stack, stack->stack_a, sizeof(int) * stack->len_a);
	while (i < stack->len_a - 1)
	{
		if (temp_stack[i] > temp_stack[i + 1])
		{
			temp = temp_stack[i];
			temp_stack[i] = temp_stack[i + 1];
			temp_stack[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	ft_transform(stack, temp_stack);
	free(temp_stack);
}


