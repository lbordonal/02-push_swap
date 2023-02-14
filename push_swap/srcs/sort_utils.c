/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:16:53 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/14 18:38:31 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_middle(t_stack *stack)
{
	int	pos;
	int	len;

	pos = 0;
	len = stack->len;
	if (len % 2 == 0)
		pos = len / 2;
	else
		pos = (len - 1) / 2;
	return (pos);
}

int	verify_sorted(t_stack *stack)
{
	int	i;
	int	len;
	int	flag;

	i = 0;
	flag = 1;
	len = stack->len;
	while (i <= len)
	{
		if (stack->stack[i] > stack->stack[i + 1])
			flag = 0;
		i++;
	}
	if (flag == 1)
		ft_printf("\n%s\n", "Stack already in the right order - no need for sort algorithm! (:");
	return (flag);
}
