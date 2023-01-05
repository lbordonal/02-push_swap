/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/05 16:15:27 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr_fd(list->content, 1);
		list = list->next;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	t_list	*stack_a;
	t_list	*new;

	(void)argc;
	i = 2;
	stack_a = ft_lstnew(argv[1]);
	while (argv[i])
	{
		new = ft_lstnew(argv[i]);
		ft_lstadd_back(&stack_a, new);
		i++;
	}
	print_list(stack_a);
}




