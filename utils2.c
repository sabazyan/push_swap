/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:54:56 by sabazyan          #+#    #+#             */
/*   Updated: 2022/08/22 18:38:22 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_printf(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	check_doubles(char **tab)
{
	int	i;
	int	j;
	int	res;

	res = 1;
	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_atoi(tab[i]) == ft_atoi(tab[j++]))
				res = 0;
		}
		i++;
	}
	return (res);
}

int	bigger_value(char **tab)
{
	int				i;
	long long int	num;

	i = 0;
	while (tab[i])
	{
		num = ft_atoi(tab[i]);
		if (num != 0)
		{
			while (*(tab[i]) == '0')
				tab[i] += 1;
		}
		if (ft_strlen(tab[i]) > 11)
			return (0);
		if (num > 2147483647 || num < -2147483648)
			return (0);
		i++;
	}
	return (1);
}
