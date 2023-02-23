/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_mgmt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:05:10 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/23 22:12:16 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	detect_error(t_stack *stack_a)
{
	if (ft_is_duplicated(stack_a) == 1)
		{
			ft_printf("%s", "dup");
			return (1);
		}
	else if (ft_value_limits(stack_a) == 1)
	{
		ft_printf("%s", "lim");
		return (1);
	}
	return (0);
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

int	ft_value_limits(t_stack *stack_a)
{
	int	i;

	i = 0;
	while (i < stack_a->len)
	{
		if (stack_a->stack[i] > INT_MAX || stack_a->stack[i] < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}
