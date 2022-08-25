/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:37:14 by sabazyan          #+#    #+#             */
/*   Updated: 2022/08/22 18:39:38 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data *stack)
{
	t_list	*first;
	t_list	*beforelast;
	t_list	*last;

	ft_printf("rra\n");
	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	first = stack->a;
	while (stack->a->next->next != NULL)
		stack->a = stack->a->next;
	beforelast = stack->a;
	last = stack->a->next;
	last->next = first;
	beforelast->next = NULL;
	first = last;
	stack->a = first;
}

void	rrb(t_data *stack)
{
	t_list	*first;
	t_list	*beforelast;
	t_list	*last;

	ft_printf("rrb\n");
	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	first = stack->b;
	while (stack->b->next->next != NULL)
		stack->b = stack->b->next;
	beforelast = stack->b;
	last = stack->b->next;
	last->next = first;
	beforelast->next = NULL;
	first = last;
	stack->b = first;
}
