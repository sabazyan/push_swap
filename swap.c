/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:33:05 by sabazyan          #+#    #+#             */
/*   Updated: 2022/08/22 18:38:00 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *stack)
{
	t_list	*first;
	t_list	*second;

	ft_printf("sa\n");
	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	first = stack->a;
	second = stack->a->next;
	first->next = second->next;
	second->next = first;
	stack->a = second;
}

void	sb(t_data *stack)
{
	t_list	*first;
	t_list	*second;

	ft_printf("sb\n");
	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	first = stack->b;
	second = stack->b->next;
	first->next = second->next;
	second->next = first;
	stack->b = second;
}
