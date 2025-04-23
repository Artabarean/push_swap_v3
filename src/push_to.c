/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:19:50 by alex              #+#    #+#             */
/*   Updated: 2025/04/23 12:08:25 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to_a(t_list *src, t_list *dst)
{
	long	*temp;
	long	value;
	int		indx;

	if (stack_is_empty(src))
		return ;
	temp = (long*)malloc(sizeof(long*) * 2);
	temp = stack_pop(src, temp);
	value = temp[0];
	indx = temp[1];
	free(temp);
	stack_push(dst, value, indx);
	write(1, "pa\n", 3);
}

void	push_to_b(t_list *src, t_list *dst)
{
	long	*temp;
	long	value;
	int		indx;

	if (stack_is_empty(src))
		return ;
	temp = (long*)malloc(sizeof(long*) * 2);
	temp = stack_pop(src, temp);
	value = temp[0];
	indx = temp[1];
	free(temp);
	stack_push(dst, value, indx);
	write(1, "pb\n", 3);
}
