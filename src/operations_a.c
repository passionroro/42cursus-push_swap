/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:00:09 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/14 16:53:23 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//Top number goes to the bottom of Stack A
int	ra(t_tab *t)
{
	int	i;
	int	tmp;

	if (!t->a)
		return (1);
	tmp = t->a[0];
	i = -1;
	while (++i < t->pos)
		t->a[i] = t->a[i + 1];
	t->a[t->pos - 1] = tmp;
	write(1, "ra\n", 3);
	return (0);
}

//Bottom number goes to the top of Stack A
int	rra(t_tab *t)
{
	int	i;
	int	tmp;

	if (!t->a)
		return (1);
	tmp = t->a[t->pos - 1];
	i = t->pos;
	while (--i > 0)
		t->a[i] = t->a[i - 1];
	t->a[0] = tmp;
	write(1, "rra\n", 4);
	return (0);
}

//Swap the first 2 elements at the top of stack a. Do nothing if there 
//is only one or no elements.
int	sa(t_tab *t)
{
	int	tmp;

	if (!t->a)
		return (1);
	tmp = t->a[1];
	t->a[1] = t->a[0];
	t->a[0] = tmp;
	write(1, "sa\n", 3);
	return (0);
}

int	ss(t_tab *t)
{
	if (sa(t) == 1 || sb(t) == 1)
		return (1);
	write(1, "ss\n", 3);
	return (0);
}

int	rrr(t_tab *t)
{
	if (rra(t) == 1 || rrb(t) == 1)
		return (1);
	return (0);
}
