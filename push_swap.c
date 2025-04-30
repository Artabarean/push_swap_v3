/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:30:19 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/30 12:29:47 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_is_sorted(t_list *stack)
{
	int	i;

	i = 0;
	if (stack->top <= 0)
		return (0);
	while (i < stack->top)
	{
		if (stack->array[i] > stack->array[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	stack_is_empty(t_list *stack)
{
	return (stack->top < 0);
}

int	stack_len(t_list *stack)
{
	if (!stack)
		return (1);
	return (stack->top + 1);
}

int	push_swap(int argc, char **numbers, int count)
{
	t_list	*sa;
	t_list	*sb;

	sa = stack_init(count);
	sb = stack_init(count);
	stack_init_from_strings(sa, numbers);
	if (stack_init_from_strings(sa, numbers) == 1)
		return (free_stacks(sa, sb), write(2, "Error\n", 6), 1);
	sa->top = count - 1;
	if (args_valid(sa->array, sa->top) == 1 || check(sa->array, sa->top) == 1)
	{
		if (argc == 2)
			ft_free_array(numbers, count);
		return (write(2, "Error\n", 6), free_stacks(sa, sb), 1);
	}
	if (stack_is_sorted(sa) == 1)
	{
		if (stack_len(sa) == 2)
			swap_a(sa);
		else
			organizer(sa, sb);
	}
	if (argc == 2)
		ft_free_array(numbers, count);
	return (free_stacks(sa, sb), 0);
}

int	main(int argc, char *argv[])
{
	char	**numbers;
	int		count;

	if (argc == 1)
		return (0);
	if (argc == 2 && !argv[1][0])
		return (write(2, "Error\n", 6), 1);
	count = 0;
	if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		while (numbers[count])
			count++;
		if (char_search(numbers) == 1)
			return (ft_free_array(numbers, count), write(2, "Error\n", 6), 1);
	}
	else
		numbers = &argv[1];
	if (max_min_int(&argv[1]) == 1)
		return (write(2, "Error\n", 6), 1);
	if (char_search(numbers) == 1)
		return (write(2, "Error\n", 6), 1);
	while (numbers[count])
		count++;
	return (push_swap(argc, numbers, count));
}
