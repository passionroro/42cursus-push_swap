/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:58:33 by rohoarau          #+#    #+#             */
/*   Updated: 2022/01/13 16:03:13 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

//Bottom number goes to the top of Stack A

void	rra(t_tab *t)
{
	int	i;
	int	tmp;

	tmp = t->tab[t->pos - 1];
	i = t.pos;
	while (--i > 0)
		t->tab[i] = t->tab[i - 1];
	t->tab[0] = tmp;
}
