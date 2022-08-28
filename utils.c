/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:08:53 by sabazyan          #+#    #+#             */
/*   Updated: 2022/08/25 10:32:42 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(char	*s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

int	ft_isdigit(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s && s[i])
	{
		j = 1;
		if (ft_strcmp(s[i], "-") == 0 || ft_strcmp(s[i], "+") == 0)
			return (0);
		if (s[i][0] < 43 || (s[i][0] > 43 && s[i][0] < 45)
		|| (s[i][0] > 45 && s[i][0] < 48) || s[i][0] > 57)
			return (0);
		while (s[i][j])
		{
			if (s[i][j] < 48 || s[i][j] > 57)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*p;
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = (char *)malloc(len * sizeof(char));
	i = 0;
	j = 0;
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	free(s1);
	return (p);
}

char	*ft_strdup(char	*s1)
{
	char	*s;
	int		i;
	size_t	size;

	i = 0;
	size = ft_strlen(s1) + 1;
	s = (char *)malloc(size * sizeof(char));
	if (!s)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

long long int	ft_atoi(char	*str)
{
	int				i;
	int				sign;
	long long int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (sign * num);
}
