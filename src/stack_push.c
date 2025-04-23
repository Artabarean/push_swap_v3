/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:02:45 by alex              #+#    #+#             */
/*   Updated: 2025/04/23 10:36:58 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	first_stack_push(t_list *stack, long value)
{
	int	i;

	if (stack->top >= stack->size - 1)
		return ;
	i = stack->top;
	while (i >= 0)
	{
		stack->array[i + 1] = stack->array[i];
		i--;
	}
	stack->array[0] = value;
	stack->top++;
}

void	stack_push(t_list *stack, long value, int indx)
{
	int	i;

	if (stack->top >= stack->size - 1)
		return ;
	i = stack->top;
	while (i >= 0)
	{
		stack->array[i + 1] = stack->array[i];
		stack->indx[i + 1] = stack->indx[i];
		i--;
	}
	stack->array[0] = value;
	stack->indx[0] = indx;
	stack->top++;
}
