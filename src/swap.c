/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:20:41 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/23 10:08:49 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_list *stack)
{
	int	temp;
	int	indx_tmp;
	
	temp = 0;
	indx_tmp = 0;
	if (stack->top < 1)
		return ;
	temp = stack->array[0];
	indx_tmp = stack->indx[0];
	stack->array[0] = stack->array[1];
	stack->indx[0] = stack->indx[1];
	stack->array[1] = temp;
	stack->indx[1] = temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_list *stack)
{
	int	temp;
	int	indx_tmp;
	
	temp = 0;
	indx_tmp = 0;
	if (stack->top < 1)
		return ;
	temp = stack->array[0];
	indx_tmp = stack->indx[0];
	stack->array[0] = stack->array[1];
	stack->indx[0] = stack->indx[1];
	stack->array[1] = temp;
	stack->indx[1] = temp;
	write(1, "sb\n", 3);
}
