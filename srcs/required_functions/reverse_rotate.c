/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 10:04:33 by yabukirento       #+#    #+#             */
/*   Updated: 2024/09/27 17:56:31 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_reverse_rotate(t_stack **stack)
{
	t_node	*prev_top;
	t_node	*prev_bottom;
	t_node	*nex_bottom;

	if (!stack || !(*stack) || (*stack)->size < 2)
		return ;
	prev_bottom = (*stack)->bottom;
	prev_top = (*stack)->top;
	nex_bottom = (*stack)->top;
	while (nex_bottom->next != prev_bottom)
		nex_bottom = nex_bottom->next;
	nex_bottom->next = NULL;
	prev_bottom->next = prev_top;
	(*stack)->top = prev_bottom;
	(*stack)->bottom = nex_bottom;
}

void	ft_rra(t_stack **stack_a)
{
	ft_reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **stack_b)
{
	ft_reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
