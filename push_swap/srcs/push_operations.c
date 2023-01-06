/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:53:30 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/06 15:41:32 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_list *stack_a, t_list *stack_b)
{
	int		size_b;
	t_list	*delete;
	t_list	*temp;

	size_b = ft_lstsize(stack_b);
	temp = ft_lstnew(stack_b->content);
	if (size_b > 0)
	{
		ft_lstadd_front(&stack_a, temp);
		ft_printlist(stack_a);
		delete = stack_b;
		stack_b = stack_b->next;
		free(delete);
		ft_printlist(stack_b);
	}
	return ;
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
		ft_printlist(stack_b);
		delete = stack_a;
		stack_a = stack_a->next;
		free(delete);
		ft_printlist(stack_a);
	}
	return ;
}

//./push_swap "|5|" "|7|" "|8|"


