/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:16:53 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/14 19:16:46 by lbordona         ###   ########.fr       */
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
