/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:21:52 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/01 16:24:35 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	algorithms(t_tab *t)
{
	if (t->pos == 2)
		return (sa(t));
	if (t->pos == 3)
		return (algorithm3(t));
	if (t->pos >= 4 && t->pos <= 5)
		return (algorithm5(t));
	if (t->pos > 5 && t->pos <= 100)
		return (algorithm100(t));
	if (t->pos > 100)
		return (algorithm500(t));
	return (0);
}
