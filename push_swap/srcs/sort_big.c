/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:21:41 by lbordona          #+#    #+#             */
/*   Updated: 2023/04/04 19:30:25 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_crazy_sort(t_stack *stack)
{
	fill_index(stack);
	while (stack->len_a >= 1)
	{
		if (stack->stack_a[0] == 0)
		{
			pb(stack);
			fill_index(stack);
		}
		else
			ra(stack);
	}
	while (stack->len_b > 0)
		pa(stack);
}

void	ft_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	size_a;
	int	max_bits;

	i = 0;
	max_bits = 0;
	while ((stack->bottom >> max_bits) != 0)
		max_bits++;
	while (i <= max_bits)
	{
		size_a = stack->len_a;
		j = 0;
		while (j < size_a)
		{
			if (((stack->stack_a[0] >> i) & 1) == 0)
				pb(stack);
			else
				ra(stack);
			j++;
		}
		pushback_to_a(stack);
		i++;
	}
}

void	pancake_sort(t_stack *stack)
{
	int	i;
	int	pos;
	int	size;

	i = 0;
	pos = 0;
	size = stack->len_a / 2;
	find_top_bottom(stack);
	while (stack->stack_a[pos] != stack->top)
		pos++;
	if ((pos - size) <= 0)
		//ra ate chegar a stack->stack_a[0]
	else
		//rra ate chegar a stack->stack_a[0]

}

/* Se apenas as operações swap, rotate, reverse rotate e push são permitidas entre duas stacks,
é possível utilizar o algoritmo de ordenação conhecido como "Pancake Sort", que é uma variação
do Selection Sort. O Pancake Sort utiliza apenas as operações permitidas para ordenar uma lista.

O algoritmo funciona da seguinte maneira:

    1- Inicialmente, empilhe todos os elementos na primeira stack.
    2- Encontre o índice do elemento máximo na primeira stack.
    3- Utilize a operação reverse rotate para mover o elemento máximo para o topo da primeira stack.
    4- Utilize a operação push para transferir o elemento máximo para a segunda stack.
    5- Repita os passos 2 a 4 até que todos os elementos estejam na segunda stack e em ordem crescente.
    6- Transfira todos os elementos da segunda stack de volta para a primeira stack utilizando a
	   operação push.

O Pancake Sort tem uma eficiência de tempo de O(n²) no pior caso, mas é bastante eficiente em casos
onde a lista já está quase ordenada. Como o algoritmo utiliza apenas as operações swap, rotate,
reverse rotate e push, não é necessário utilizar outras operações. */
