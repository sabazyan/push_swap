/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:40:26 by sabazyan          #+#    #+#             */
/*   Updated: 2022/08/28 13:43:11 by sabazyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list {
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;
typedef struct s_data
{
	t_list	*a;
	t_list	*b;
}	t_data;
//swap.c
void			sa(t_data *stack);
void			sb(t_data *stack);
//push.c
void			pa(t_data *stack);
void			pb(t_data *stack);
//rotate.c
void			ra(t_data *stack);
void			rb(t_data *stack);
//reverse rotate.c
void			rra(t_data *stack);
void			rrb(t_data *stack);
//split
size_t			letter_count(char *s, char c);
char			*create_word(char *s, size_t start_index, size_t len);
char			**ft_split(char *s, char c);
//utils.c
char			*ft_strdup(char	*s1);
char			*ft_strjoin(char *s1, char *s2);
size_t			ft_strlen(char	*s);
int				ft_isdigit(char **s);
long long int	ft_atoi(char *str);
//utils2.c
void			ft_printf(char *str);
int				ft_strcmp(char	*s1, char	*s2);
int				check_doubles(char **tab);
int				bigger_value(char **tab);
//stack.c
char			**get_integers(char **av);
t_list			*a(char **tab);
t_list			*b(void);
int				is_sorted(t_list *node);
//index.c
int				sizeof_list(t_list *node);
int				max(t_data *stack);
int				which_half(t_data *stack);
void			loop_for_indexation(t_data *stack, t_list *first, t_list *min);
void			indexation(t_data *stack);
//sort.c
int				find_counter(int size);
void			a_to_b(t_data *stack);
void			b_to_a(t_data *stack);
void			loop(int i, int size, t_data *stack, t_list *b);
//five_nodes.c
void			three_nodes(t_data *stack);
void			four_nodes(t_data *stack, int n);
void			check_three(t_data *stack, t_list *node);
void			five_nodes(t_data *stack);
void			check_four(t_data *stack, t_list *node);
//main.c
void			handle_err(char **tab);
void			sorting(t_data *stack);

#endif
