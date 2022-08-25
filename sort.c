/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:34:10 by sabazyan          #+#    #+#             */
/*   Updated: 2022/08/24 16:26:58 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b(t_data *stack)
{
	t_list	*a;
	int		i;
	int		counter;

	a = stack->a;
	i = 0;
	counter = find_counter(sizeof_list(stack->a));
	while (a != NULL)
	{
		if (a->index <= i)
		{
			pb(stack);
			rb(stack);
			i++;
		}
		else if (a->index <= i + counter)
		{
			pb(stack);
			i++;
		}
		else
			ra(stack);
		a = stack->a;
	}
}

int	find_counter(int size)
{
	int	counter;

	if (size <= 100)
		counter = size * 15 / 100;
	else
		counter = size * 30 / 500;
	return (counter);
}

void	b_to_a(t_data *stack)
{
	t_list	*b;
	int		i;
	int		size;

	b = stack->b;
	i = 0;
	size = sizeof_list(stack->b);
	loop(i, size, stack, b);
}

void	loop(int i, int size, t_data *stack, t_list *b)
{
	while (i < size)
	{
		if (b->index == max(stack))
		{
			pa(stack);
			b = stack->b;
		}
		else
		{
			while (b->index != max(stack))
			{
				if (which_half(stack) == 1)
					rb(stack);
				else
					rrb(stack);
				b = stack->b;
			}
			pa(stack);
			b = stack->b;
		}
		i++;
	}
}
