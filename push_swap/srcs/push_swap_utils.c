/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:32:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/06 15:58:19 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_all(t_stack *stack_a , t_stack *stack_b)
{
	free(stack_a->stack);
	free(stack_b->stack);
	free(stack_a->index);
	free(stack_b->index);
}

int	ft_is_duplicated(t_stack *stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (stack_a->len == 1)
		return (0);
	while (i < stack_a->len)
	{
		while (j < stack_a->len)
		{
			if (stack_a->stack[i] == stack_a->stack[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_value_limits(long int num)
{
	if (num > INT_MAX || num < INT_MIN)
		return (1);
	return (0);
}

int	stack_sorted(t_stack *stack_a)
{
	int	i;

	i = 0;
	while (i < (stack_a->len - 1))
	{
		if (stack_a->stack[i] > stack_a->stack[i + 1])
			return (0);
		else
			i++;
	}
	return (1);
}

void	error_handler(int option)
{
	if (option == 1)
	{
		ft_printf("%s\n", "Error");
		exit (0);
	}
	else if (option == 2)
	{
		ft_printf("%s\n", "Error");
		return ;
	}
}
