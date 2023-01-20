/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:26:13 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/20 15:31:27 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_talisca(t_stack *stack) //atribui indice dependendo do valor
{
	int	i;
	int	j;
	int messi;

	i = 0;
	while (i < stack->len)
	{
		j = 0;
		messi = 0;
		while (j < stack->len)
		{
			if (stack->stack[j] < stack->stack[i])
				messi++;
			j++;
		}
		stack->finalpos[i] = messi;
		i++;
	}
}

/* void	ft_marquinhos(t_stack *stack_a, t_stack *stack_b) //ordena os indices
{
	int	i;
	int	j;
	int	temp;
	int	temppos;

	i = 0;
	j = 0;

	while (i <= stack_a->len)
	{
		temp = stack_a->stack[0];
		temppos = stack_a->finalpos[0];
		while (stack_a->finalpos[j] != i)
			j++;
		stack_a->stack[i] = stack_a->stack[j];
		stack_a->finalpos[i] = stack_a->finalpos[j];
		stack_a->stack[j] = temp;
		stack_a->finalpos[j] = temppos;
		i++;
	}
	pb(stack_b, stack_a);
} */

