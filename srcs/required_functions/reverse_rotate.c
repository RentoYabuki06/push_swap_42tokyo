/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 10:04:33 by yabukirento       #+#    #+#             */
/*   Updated: 2024/09/19 23:42:42 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_reverse_rotate(t_stack **stack)
{
	t_node	*tmp_top;
	t_node	*tmp_bottom;
	t_node	*prev_bottom;

	if (!stack || !(*stack) || (*stack)->size < 2)
		return ;
	tmp_bottom = (*stack)->bottom;
	tmp_top = (*stack)->top;
	prev_bottom = tmp_top;
	while (prev_bottom->next != tmp_bottom)
		prev_bottom = prev_bottom->next;
	prev_bottom->next = NULL;
	tmp_bottom->next = tmp_top;
	(*stack)->top = tmp_bottom;
	(*stack)->bottom = prev_bottom;
}

void	ft_rra(t_stack **stack_a)
{
	ft_reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	ft_rrb(t_stack **stack_b)
{
	ft_reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_rotate(stack_b);
	ft_printf("rrr\n");
}
