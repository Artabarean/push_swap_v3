/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:40:04 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/23 09:53:47 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_a(t_list *stack)
{
	int	i;
	int	last_value;
	int	last_indx;

	i = 0;
	if (stack->top < 1)
		return ;
	i = stack->top;
	last_value = stack->array[stack->top];
	last_indx = stack->indx[stack->top];
	while (i > 0)
	{
		stack->array[i] = stack->array[i - 1];
		stack->indx[i] = stack->indx[i - 1];
		i--;
	}
	stack->array[0] = last_value;
	stack->indx[0] = last_indx;
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_list *stack)
{
	int	i;
	int	last_value;
	int	last_indx;

	i = 0;
	if (stack->top < 1)
		return ;
	i = stack->top;
	last_value = stack->array[stack->top];
	last_indx = stack->indx[stack->top];
	while (i > 0)
	{
		stack->array[i] = stack->array[i - 1];
		stack->indx[i] = stack->indx[i - 1];
		i--;
	}
	stack->array[0] = last_value;
	stack->indx[0] = last_indx;
	write(1, "rrb\n", 4);
}

void	reverse_rotate(t_list *stack, char name)
{
	int	i;
	int	last_value;
	int	last_indx;

	i = 0;
	if (stack->top < 1)
		return ;
	i = stack->top;
	last_value = stack->array[stack->top];
	last_indx = stack->indx[stack->top];
	while (i > 0)
	{
		stack->array[i] = stack->array[i - 1];
		stack->indx[i] = stack->indx[i - 1];
		i--;
	}
	stack->array[0] = last_value;
	stack->indx[0] = last_indx;
	write(1, "rr", 2);
	write(1, &name, 1);
	write(1, "\n", 1);
}
