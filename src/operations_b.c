/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:02:11 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/01 14:51:44 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//Top number goes to the bottom of Stack B
int	rb(t_tab *t)
{
	int	i;
	int	tmp;

	if (!t->tabb)
		return (1);
	tmp = t->tabb[0];
	i = -1;
	while (++i < t->posb)
		t->tabb[i] = t->tabb[i + 1];
	t->tabb[t->posb - 1] = tmp;
	write(1, "rb\n", 3);
	//ft_print_tab(t);
	return (0);
}

//Bottom number goes to the top of Stack B
int	rrb(t_tab *t)
{
	int	i;
	int	tmp;

	if (!t->tabb)
		return (1);
	tmp = t->tabb[t->posb - 1];
	i = t->posb;
	while (--i > 0)
		t->tabb[i] = t->tabb[i - 1];
	t->tabb[0] = tmp;
	write(1, "rrb\n", 4);
	//ft_print_tab(t);
	return (0);
}

//Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements.
int	sb(t_tab *t)
{
	int	tmp;

	if (!t->tab)
		return (1);
	tmp = t->tab[1];
	t->tab[1] = t->tab[0];
	t->tab[0] = tmp;
	//ft_print_tab(t);
	write(1, "sb\n", 3);
	return (0);
}

int	rr(t_tab *t)
{
	if (ra(t) == 1 || rb(t) == 1)
		return (1);
	printf("rr\n");
	return (0);
}
