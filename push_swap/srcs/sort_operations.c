/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:26:13 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/31 12:04:47 by lbordona         ###   ########.fr       */
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

void	ft_marquinhos(t_stack *stack_a, t_stack *stack_b) //ordena os indices
{
	int	bigger_index;
	int	i;
	int	counter;

	bigger_index = stack_a->len - 1;
	i = bigger_index + 1;
	counter = 0;
	while (i > 0)
	{
		counter++;
//		ft_printstack(stack_a);
//		ft_printstack(stack_b);
		if (stack_a->finalpos[0] == bigger_index)
		{
			pb(stack_a, stack_b);
			bigger_index--;
		}
		else if (stack_a->stack[0] < stack_a->stack[1])
			ra(stack_a);
		else if (stack_a->stack[0] > stack_a->stack[1])
		{
			sa(stack_a);
			ra(stack_a);
		}
		i = stack_a->len;
		ft_printf("\n%d\n", i);
		ft_printf("%s\n", "stack_a:");
		ft_printstack(stack_a);
		ft_printf("\n%s\n", "stack_b:");
		ft_printstack(stack_b);
		ft_printf("\n");
	}
	ft_printf("\n%s%d\n\n", "Operations: ", counter);
}
