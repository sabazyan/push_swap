/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:32:37 by sabazyan          #+#    #+#             */
/*   Updated: 2022/08/25 11:37:17 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_err(char **tab)
{
	if (ft_isdigit(tab) == 0)
	{
		write(2, "There is a non digital value!\n", 30);
		exit(0);
	}
	else if (check_doubles(tab) == 0)
	{
		write(2, "There are duplicates!\n", 22);
		exit(0);
	}
	else if (bigger_value(tab) == 0)
	{
		write(2, "There is a value out of int range!\n", 34);
		exit(0);
	}
}

void	sorting(t_data *stack)
{
	if (sizeof_list(stack->a) == 3)
		three_nodes(stack);
	else if (sizeof_list(stack->a) == 4)
		four_nodes(stack, 0);
	else if (sizeof_list(stack->a) == 5)
		five_nodes(stack);
	else
	{
		a_to_b(stack);
		b_to_a(stack);
	}
}

int	main(int ac, char	**av)
{
	char	**integers;
	t_data	stack;

	if (ac > 1)
	{
		integers = get_integers(av);
		handle_err(integers);
		stack.a = a(integers);
		stack.b = b();
		if (sizeof_list(stack.a) == 1 || is_sorted(stack.a) == 1)
			return (0);
		if (sizeof_list(stack.a) == 2)
		{
			if (stack.a->value > stack.a->next->value)
				sa(&stack);
			return (0);
		}
		indexation(&stack);
		sorting(&stack);
	}
	return (0);
}
