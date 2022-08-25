/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:34:44 by sabazyan          #+#    #+#             */
/*   Updated: 2022/08/22 18:37:11 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *stack)
{
	t_list	*a;
	t_list	*b;

	ft_printf("pa\n");
	if (stack->b == NULL)
		return ;
	a = stack->a;
	b = stack->b->next;
	stack->b->next = a;
	a = stack->b;
	stack->a = a;
	stack->b = b;
}

void	pb(t_data *stack)
{
	t_list	*a;
	t_list	*b;

	ft_printf("pb\n");
	if (stack->a == NULL)
		return ;
	a = stack->a->next;
	b = stack->b;
	stack->a->next = b;
	b = stack->a;
	stack->a = a;
	stack->b = b;
}
