/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:39 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/21 23:32:40 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/* push_swap.c: */
void	ft_start_stacks(t_stack	*stack, int len);
void	ft_fill_stack(int argc, char **argv, t_stack *stack);

/* utils.c: */
int		ft_value_limits(long int num);

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

/* sort_operations.c: */

/* sort_utils.c: */


#endif
