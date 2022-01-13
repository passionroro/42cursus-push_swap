/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:27:54 by rohoarau          #+#    #+#             */
/*   Updated: 2022/01/13 14:49:43 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_tab	t;

	t.pos = -1;
	if (argc < 2)
		return (printf("2 or more arguments please\n"));
	if (argc == 2)
		create_tab1(argv, &t);
	if (argc > 2)
		create_tab2(argc, argv, &t);
	check_not_sorted(&t);
	free(t.tab);
	return (0);
}
