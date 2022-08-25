/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:32:05 by sabazyan          #+#    #+#             */
/*   Updated: 2022/08/24 16:32:16 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_nodes(t_data *stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	first = stack->a;
	second = stack->a->next;
	last = stack->a->next->next;
	if (is_sorted(first) == 1)
		return ;
	else if (first->index < second->index && first->index < last->index)
	{
		rra(stack);
		sa(stack);
	}
	else if (first->index < second->index && first->index > last->index)
		rra(stack);
	else if (first->index > second->index && first->index < last->index)
		sa(stack);
	else
	{
		ra(stack);
		if (second->index > last->index)
			sa(stack);
	}
}

void	four_nodes(t_data *stack, int n)
{
	t_list	*first;
	int		i;

	first = stack->a;
	i = 0;
	while (first)
	{
		if (first->index == n)
			break ;
		i++;
		first = first->next;
	}
	first = stack->a;
	while (first->index != n)
	{
		if (i < 2)
			ra(stack);
		else
			rra(stack);
		first = stack->a;
	}
	check_three(stack, first);
}

void	check_three(t_data *stack, t_list *node)
{
	if (is_sorted(node) == 0)
	{
		pb(stack);
		three_nodes(stack);
		pa(stack);
	}
}

void	five_nodes(t_data *stack)
{
	t_list	*first;
	int		i;

	first = stack->a;
	i = 0;
	while (first)
	{
		if (first->index == 0)
			break ;
		i++;
		first = first->next;
	}
	first = stack->a;
	while (first->index != 0)
	{
		if (i < 2)
			ra(stack);
		else
			rra(stack);
		first = stack->a;
	}
	check_four(stack, first);
}

void	check_four(t_data *stack, t_list *node)
{
	if (is_sorted(node) == 0)
	{
		pb(stack);
		four_nodes(stack, 1);
		pa(stack);
	}
}
