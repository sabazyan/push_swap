/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:28:10 by sabazyan          #+#    #+#             */
/*   Updated: 2022/08/24 16:13:30 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_integers(char **av)
{
	int		i;
	char	*args;
	char	**splited;

	i = 1;
	args = NULL;
	while (av[i])
	{
		if (!args)
			args = ft_strdup(av[i]);
		else
		{
			args = ft_strjoin(args, " ");
			args = ft_strjoin(args, av[i]);
		}
		i++;
	}
	splited = ft_split(args, ' ');
	return (splited);
}

t_list	*a(char **tab)
{
	int		i;
	t_list	*first;
	t_list	*temp;
	t_list	*last;

	i = 1;
	first = (t_list *)malloc(sizeof(t_list));
	first->value = ft_atoi(tab[0]);
	first->next = NULL;
	last = first;
	while (tab[i])
	{
		temp = (t_list *)malloc(sizeof(t_list));
		temp->value = ft_atoi(tab[i]);
		temp->next = NULL;
		last->next = temp;
		last = temp;
		i++;
	}
	return (first);
}

t_list	*b(void)
{
	return (0);
}

int	is_sorted(t_list *node)
{
	while (node && node->next)
	{
		if (node->value > node->next->value)
			return (0);
		node = node->next;
	}
	return (1);
}
