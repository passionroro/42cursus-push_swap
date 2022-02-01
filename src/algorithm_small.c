/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:58:22 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/01 16:44:27 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	algorithm5(t_tab *t)
{
	int	ret;

	ret = 0;
	while (t->pos > 3)
	{
		if (smallest_pos(t) == 0)
			ret += pb(t);
		else if (smallest_pos(t) >= (t->pos / 2))
			ret += rra(t);
		else if (smallest_pos(t) < (t->pos / 2))
			ret += ra(t);
	}
	ret += algorithm3(t);
	while (t->posb > 0)
		ret += pa(t);
	return (ret);
}

int	algorithm3(t_tab *t)
{
	if (t->tab[0] > t->tab[1] && t->tab[1] < t->tab[2] && t->tab[2] > t->tab[0])
		return (sa(t));
	if (t->tab[0] > t->tab[1] && t->tab[1] < t->tab[2] && t->tab[2] < t->tab[0])
		return (ra(t));
	if (t->tab[0] < t->tab[1] && t->tab[1] > t->tab[2] && t->tab[2] < t->tab[0])
		return (rra(t));
	if (t->tab[0] < t->tab[1] && t->tab[1] > t->tab[2] && t->tab[2] > t->tab[0])
		return (sa(t) + ra(t));
	if (t->tab[0] > t->tab[1] && t->tab[1] > t->tab[2] && t->tab[2] < t->tab[0])
		return (sa(t) + rra(t));
	return (0);
}
