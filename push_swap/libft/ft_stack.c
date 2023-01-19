/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:41:06 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/19 00:20:58 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printstack(t_stack *stack_a)
{
	int	i;

	i = 0;
	while (i < stack_a->len)
	{
		ft_printf("|%d|  |%d|\n", stack_a->stack[i], stack_a->finalpos[i]);
		i++;
	}
}

int	ft_checkstack(t_stack *stack)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	flag = 0;
	while ((i < stack->len) && (flag == 0))
	{
		j = i + 1;
		while (j < stack->len)
		{
			if ((stack->stack[i] == stack->stack[j])
				|| (stack->stack[j] > INT_MAX) || (stack->stack[j] < INT_MIN))
			{
					flag = 1;
					ft_printf("%s\n", "Stack error! :(");
					break;
			}
			j++;
		}
		i++;
	}
	return (flag);
}

void	ft_finalpos(t_stack *stack) //indice final de cada item da stack
{
	int	i;
	int	j;
	int lower;

	i = 0;
	while (i < stack->len)
	{
		lower = 0;
		j = 0;
		while (j < stack->len)
		{
			if (stack->stack[j] < stack->stack[i])
				lower++;
			j++;
		}
		stack->finalpos[i] = lower;
		i++;
	}
}
