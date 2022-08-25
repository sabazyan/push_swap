/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:30:33 by sabazyan          #+#    #+#             */
/*   Updated: 2022/08/24 16:12:55 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sizeof_list(t_list *node)
{
	int		size;

	size = 0;
	while (node)
	{
		size++;
		node = node->next;
	}
	return (size);
}

int	max(t_data *stack)
{
	t_list	*b;
	int		max;

	b = stack->b;
	max = 0;
	while (b)
	{
		if (b->index > max)
			max = b->index;
		b = b->next;
	}
	return (max);
}

int	which_half(t_data *stack)
{
	t_list	*b;
	int		i;

	b = stack->b;
	i = 0;
	while (b->index != max(stack))
	{
		i++;
		b = b->next;
	}
	if (i <= sizeof_list(stack->b) / 2)
		return (1);
	else
		return (-1);
}

void	loop_for_indexation(t_data *stack, t_list *first, t_list *min)
{
	int	i;
	int	size;

	i = 0;
	size = sizeof_list(stack->a);
	while (i < size)
	{
		min = first;
		while (min)
		{
			if (min->index != -1)
				min = min->next;
			else
				break ;
		}
		while (first)
		{
			if (first->value < min->value && first->index == -1)
				min = first;
			first = first->next;
		}
		min->index = i++;
		first = stack->a;
	}
}

void	indexation(t_data *stack)
{
	t_list	*first;
	t_list	*min;

	first = stack->a;
	min = first;
	while (first)
	{
		first->index = -1;
		first = first->next;
	}
	first = stack->a;
	loop_for_indexation(stack, first, min);
}
