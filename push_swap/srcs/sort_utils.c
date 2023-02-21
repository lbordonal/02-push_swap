/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:16:53 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/21 18:14:52 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_top_mid_bottom(t_stack *stack)
{
	int	i;
	int	len;

	i = 0;
	len = stack->len;
	ft_talisca(stack);
	while (stack->finalpos[i] != 0)
		i++;
	stack->top = stack->stack[i];
	i = 0;
	while (stack->finalpos[i] != (len - 1))
		i++;
	stack->bottom = stack->stack[i];
	if (len % 2 == 0)
		stack->mid = len / 2;
	else
		stack->mid = (len - 1) / 2;
	ft_printf("%s%d\n", "top = ", stack->top);
	ft_printf("%s%d\n", "mid = ", stack->mid);
	ft_printf("%s%d\n", "bottom = ", stack->bottom);
}
