/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:59:10 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/23 10:38:03 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void k_sort(t_list *a, t_list *b)
{
	int	i;
	int	length;

	i = 0;
	length = stack_len(a);
	while (b->indx[i] != length - 1)
		i++;
	if (i < (length / 2))
	{
		while (i < 0)
		{
			rotate_b(b);
			i--;
		}
	}
	else
	{
		while (i < length)
		{
			i++;
			reverse_rotate_b(b);
		}
	}
	push_to_a(b, a);
}

void	process_stack_a(t_list *a, t_list *b, int *i, int range)
{
	if (a->indx[0] <= *i)
	{
		push_to_b(a, b);
		rotate_b(b);
		(*i)++;
	}
	else if (*i < a->indx[0] && a->indx[0] <= *i + range)
	{
		push_to_b(a, b);
		(*i)++;
	}
	else
		rotate_a(a);
}

void	sort_large(t_list *a, t_list *b)
{
	int	i;
	int range;

	i = 0;
	range = ft_sqrt(a->size) *14 / 10;
	if (range < 1)
		range = 1;
	if (stack_len(a) == 0)
        return;
	while (stack_len(a))
		process_stack_a(a, b, &i, range);
	while (stack_len(b))
		k_sort(a, b);
}
