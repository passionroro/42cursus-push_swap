/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:27:54 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/14 18:23:52 by rohoarau         ###   ########.fr       */
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
	simplified_sort(t, t->a, insertion_sort(t));
	if (t->pos > 5 && t->pos <= 20)
	{
		algorithm100(t, 2);
		if (t->posb)
			return (pa(t) + ra(t));
	}
	if (t->pos > 20 && t->pos <= 100)
	{
		algorithm100(t, 4);
		if (t->posb)
			return (pa(t) + ra(t));
	}
	if (t->pos > 100)
		return (algorithm100(t, 8));
	return (0);
}

int	main(int argc, char **argv)
{
	t_tab	t;

	if (argc < 2)
		return (0);
	if (argc == 2)
		create_tab_1(argc, argv, &t);
	if (argc > 2)
		create_tab_2(argc, argv, &t);
	check_errors(&t);
	algorithms(&t);
	ft_free_tab(&t);
	return (0);
}
