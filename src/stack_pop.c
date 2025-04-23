/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:03:42 by alex              #+#    #+#             */
/*   Updated: 2025/04/23 12:58:27 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	*stack_pop(t_list *stack, long *value)
{
	int	i;

	i = 0;
	value[0] = stack->array[0];
	value[1] = stack->indx[0];
	while (i < stack->top)
	{
		stack->array[i] = stack->array[i + 1];
		stack->indx[i] = stack->indx[i + 1];
		i++;
	}
	stack->top--;
	return (value);
}
