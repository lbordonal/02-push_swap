/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:39 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/29 16:56:57 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/* push_swap.c: */
void	ft_start_stacks(t_stack *stack, int len);
void	ft_fill_stack(int argc, char **argv, t_stack *stack);
void	selection_sort(t_stack *stack);

/* utils.c: */
int		ft_value_limits(long int num);
int		stack_sorted(t_stack *stack);

/* operation_swap.c: */
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);

/* operation_rotate.c: */
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);

/* operation_push.c: */
void	pa(t_stack *stack);
void	pb(t_stack *stack);

/* operation_rerotate.c: */
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

/* sort_small.c: */
void	ft_sort_two_a(t_stack *stack);
void	ft_sort_two_b(t_stack *stack);
void	ft_sort_three(t_stack *stack);
void	ft_sort_five(t_stack *stack);

/* sort_big.c: */
void	ft_crazy_sort(t_stack *stack);
void	ft_sort(t_stack *stack);

/* sort_utils.c: */
void	double_pb_and_sort(t_stack *stack);
void	rra_pa_ra_ra(t_stack *stack);
void	ft_transform(t_stack *stack, int *temp_stack);
void	fill_index(t_stack *stack);
void	find_top_bottom(t_stack *stack);

#endif
