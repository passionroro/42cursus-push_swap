/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:27:54 by rohoarau          #+#    #+#             */
/*   Updated: 2022/03/03 16:19:19 by rohoarau         ###   ########.fr       */
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
		algorithm100(t, 2);
	if (t->pos > 20 && t->pos <= 100)
		algorithm100(t, 4);
	if (t->pos > 100)
		algorithm100(t, 8);
	if (t->posb)
	{
		pa(t);
		ra(t);
		free(t->b);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_tab	t;

	if (argc < 2)
		return (0);
	if (argc == 2)
		create_tab(&t, ft_split(argv[1], ' '), argc);
	if (argc > 2)
		create_tab(&t, argv, argc);
	check_errors(&t);
	algorithms(&t);
	free(t.a);
	return (0);
}
