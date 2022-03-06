/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:57:48 by rohoarau          #+#    #+#             */
/*   Updated: 2022/03/03 16:54:52 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	algorithm100(t_tab *t, int how_big)
{
	int	x;
	int	border;
	int	save_max;

	x = -1;
	border = t->pos / how_big * (x + 2);
	while (++x < how_big + 1)
	{
		if (t->pos % how_big * (x + 2) == 0 && x == how_big)
			return (0);
		if (push_block(t, border, x) == 1)
			return (0);
		save_max = biggest_int(t->b, t->posb);
		while (t->posb)
		{
			push_biggest(t);
			push_smallest(t);
		}
		rotate_smallest(t, (t->pos / how_big * (x + 1)), save_max);
	}
	return (0);
}

int	push_block(t_tab *t, int border, int x)
{
	int	remember;

	remember = 0;
	if (border * (x + 1) > (t->pos + t->posb))
		return (push_last_block(t, border, x));
	while (t->posb < border && border * (x + 1) <= (t->pos + t->posb))
	{
		if (t->a[0] < border * (x + 1) && t->a[0] >= border * x && t->pos > 0)
			pb(t);
		else
		{
			ra(t);
			remember++;
		}
	}
	while (remember && x != 0)
	{
		rra(t);
		remember--;
	}
	return (0);
}

int	push_last_block(t_tab *t, int border, int x)
{
	while (t->posb < (t->pos + t->posb) - (border * x))
	{
		if (t->a[0] < t->pos + t->posb && t->a[0] >= border * x && t->pos > 0)
			pb(t);
		else
			ra(t);
	}
	if (t->pos + t->posb - (border * x) == 1)
		return (1);
	return (0);
}

void	push_biggest(t_tab *t)
{
	while (1)
	{
		if (specific_pos(t->b, t->posb, 'B') == 0)
		{
			pa(t);
			break ;
		}
		else if (specific_pos(t->b, t->posb, 'B') >= (t->posb / 2))
			rrb(t);
		else if (specific_pos(t->b, t->posb, 'B') < (t->posb / 2))
			rb(t);
	}
}

void	push_smallest(t_tab *t)
{
	while (1)
	{
		if (specific_pos(t->b, t->posb, 's') == 0)
		{
			pa(t);
			ra(t);
			break ;
		}
		else if (specific_pos(t->b, t->posb, 's') >= (t->posb / 2))
			rrb(t);
		else if (specific_pos(t->b, t->posb, 's') < (t->posb / 2))
			rb(t);
	}
}
