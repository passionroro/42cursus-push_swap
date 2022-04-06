/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:58:22 by rohoarau          #+#    #+#             */
/*   Updated: 2022/03/03 13:45:57 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	algorithm5(t_tab *t)
{
	int	ret;

	ret = 0;
	while (t->pos > 3)
	{
		if (specific_pos(t->a, t->pos, 's') == 0)
			pb(t);
		else if (specific_pos(t->a, t->pos, 's') >= (t->pos / 2))
			rra(t);
		else if (specific_pos(t->a, t->pos, 's') < (t->pos / 2))
			ra(t);
	}
	ret += algorithm3(t);
	while (t->posb > 0)
		ret += pa(t);
	free(t->b);
	return (ret);
}

int	algorithm3(t_tab *t)
{
	if (t->a[0] > t->a[1] && t->a[1] < t->a[2] && t->a[2] > t->a[0])
		return (sa(t));
	if (t->a[0] > t->a[1] && t->a[1] < t->a[2] && t->a[2] < t->a[0])
		return (ra(t));
	if (t->a[0] < t->a[1] && t->a[1] > t->a[2] && t->a[2] < t->a[0])
		return (rra(t));
	if (t->a[0] < t->a[1] && t->a[1] > t->a[2] && t->a[2] > t->a[0])
		return (sa(t) + ra(t));
	if (t->a[0] > t->a[1] && t->a[1] > t->a[2] && t->a[2] < t->a[0])
		return (sa(t) + rra(t));
	return (0);
}
