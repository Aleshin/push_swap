/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saleshin <saleshin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 08:43:12 by saleshin          #+#    #+#             */
/*   Updated: 2023/11/18 08:43:31 by saleshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_a(t_stacks *stacks, int direction)
{
	int	i;

	i = 0;
	while (i < stacks->stack_a_counter)
	{
		stacks->stack_a[2][i] = stacks->stack_a[2][i] + direction;
		i++;
	}
	stacks->stack_a_pointer = (stacks->stack_a_pointer + direction)
		% stacks->stack_a_counter;
	if (stacks->stack_a_pointer < 0)
		stacks->stack_a_pointer = stacks->stack_a_counter;
	return (0);
}

int	rotate_b(t_stacks *stacks, int direction)
{
	stacks->stack_b_pointer = (stacks->stack_b_pointer + direction)
		% stacks->stack_b_counter;
	if (stacks->stack_b_pointer < 0)
		stacks->stack_b_pointer = stacks->stack_b_counter - 1;
	return (0);
}