/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:35:47 by sabazyan          #+#    #+#             */
/*   Updated: 2022/08/22 18:39:24 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *stack)
{
	t_list	*first;
	t_list	*second;

	ft_printf("ra\n");
	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	first = stack->a;
	second = stack->a->next;
	while (stack->a->next)
		stack->a = stack->a->next;
	stack->a->next = first;
	stack->a = second;
	first->next = NULL;
}

void	rb(t_data *stack)
{
	t_list	*first;
	t_list	*second;

	ft_printf("rb\n");
	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	first = stack->b;
	second = stack->b->next;
	while (stack->b->next)
		stack->b = stack->b->next;
	stack->b->next = first;
	stack->b = second;
	first->next = NULL;
}
