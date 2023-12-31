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

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# define N 10

typedef struct s_stacks
{
	int	stack_a_counter;
	int	stack_b_counter;
	int	stack_a_pointer;
	int	stack_b_pointer;
	int	stack_a[N][3];
	int	stack_temp[N];
	int	stack_b[N][2];
}	t_stacks;

int	pull_a(t_stacks *stacks, int i);
int	push_b(t_stacks *stacks, int j);
int	rotate(t_stacks *stacks, int direction);
int	swap_a(t_stacks *stacks, int i);
int	init(t_stacks *stacks);
int	print(t_stacks *stacks);
int	bubble_sort(t_stacks *stacks);
int	find_moves(t_stacks *stacks);
int	make_swaps(t_stacks *stacks);
#endif
