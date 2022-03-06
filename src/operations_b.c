/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:02:11 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/14 17:13:12 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//Top number goes to the bottom of Stack B
int	rb(t_tab *t)
{
	int	i;
	int	tmp;

	if (!t->b)
		return (1);
	tmp = t->b[0];
	i = -1;
	while (++i < t->posb)
		t->b[i] = t->b[i + 1];
	t->b[t->posb - 1] = tmp;
	write(1, "rb\n", 3);
	return (0);
}

//Bottom number goes to the top of Stack B
int	rrb(t_tab *t)
{
	int	i;
	int	tmp;

	if (!t->b)
		return (1);
	tmp = t->b[t->posb - 1];
	i = t->posb;
	while (--i > 0)
		t->b[i] = t->b[i - 1];
	t->b[0] = tmp;
	write(1, "rrb\n", 4);
	return (0);
}

//Swap the first 2 elements at the top of stack B. Do nothing if there 
//is only one or no elements.
int	sb(t_tab *t)
{
	int	tmp;

	if (!t->a)
		return (1);
	tmp = t->a[1];
	t->a[1] = t->a[0];
	t->a[0] = tmp;
	write(1, "sb\n", 3);
	return (0);
}

int	rr(t_tab *t)
{
	if (ra(t) == 1 || rb(t) == 1)
		return (1);
	write(1, "rr\n", 3);
	return (0);
}
