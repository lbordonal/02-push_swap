/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:53:30 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/19 10:41:25 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	//int	temp;

	i = 0;
	if (stack_b->len > 0)
	{
		stack_a->len++;
		stack_b->len++;
		while (i <= stack_a->len)
		{
			stack_a->stack[i + 1] = stack_a->stack[i];
			i++;
		}
		stack_a->stack[0] = stack_b->stack[0];
	}
	/* int		size_b;
	t_list	*delete;
	t_list	*temp;

	size_b = ft_lstsize(stack_b);
	temp = ft_lstnew(stack_b->content);
	if (size_b > 0)
	{
		ft_lstadd_front(&stack_a, temp);
		ft_printf("%s", "pa[A]: ");
		ft_printlist(stack_a);
		delete = stack_b;
		stack_b = stack_b->next;
		free(delete);
		ft_printf("%s", "pa[B]: ");
		ft_printlist(stack_b);
	}
	return ; */
}

void	pb(t_list *stack_b, t_list *stack_a)
{
	int		size_a;
	t_list	*delete;
	t_list	*temp;

	size_a = ft_lstsize(stack_a);
	temp = ft_lstnew(stack_a->content);
	if (size_a > 0)
	{
		ft_lstadd_front(&stack_b, temp);
		ft_printf("%s", "pb[B]: ");
		ft_printlist(stack_b);
		delete = stack_a;
		stack_a = stack_a->next;
		free(delete);
		ft_printf("%s", "pb[A]: ");
		ft_printlist(stack_a);
	}
	return ;
}
