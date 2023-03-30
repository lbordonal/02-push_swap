/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:56:16 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/29 18:13:06 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	double_pb_and_sort(t_stack *stack)
{
	pb(stack);
	pb(stack);
	ft_sort_two_b(stack);
	if (stack_sorted_a(stack) == 0)
		ft_sort_three(stack);
}

void	rra_pa_ra_ra(t_stack *stack)
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
	int	*aux;
	int	temp;

	i = 0;
	aux = ft_calloc(stack->len_a, sizeof(int));
	if (!aux)
		return ;
	aux = ft_memcpy(aux, stack->stack_a, sizeof(int) * stack->len_a);
	while (i < stack->len_a - 1)
	{
		if (aux[i] > aux[i + 1])
		{
			temp = aux[i];
			aux[i] = aux[i + 1];
			aux[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	ft_transform(stack, aux);
	free(aux);
}

void	find_top_bottom(t_stack *stack)
{
	int	i;
	int	len;

	i = 0;
	len = stack->len_a - 1;
	fill_index(stack);
	while (stack->stack_a[i] != 0)
		i++;
	stack->top = stack->stack_a[i];
	i = 0;
	while (stack->stack_a[i] != len)
		i++;
	stack->bottom = stack->stack_a[i];
}
