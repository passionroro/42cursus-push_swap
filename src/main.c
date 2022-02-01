/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:27:54 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/01 16:41:14 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_tab	t;

	if (argc < 2)
		return (0);
	if (argc == 2)
		create_tab_1(argv, &t);
	if (argc > 2)
		create_tab_2(argc, argv, &t);
	check_errors(&t);
	//printf("--ORIGINAL--\n");
	//ft_print_tab(&t);
	algorithms(&t);
	//printf("--FINAL--\n");
	//ft_print_tab(&t);
	if (t.sort)
		free(t.sort);
	if (t.tab)
		free(t.tab);
	if (t.tabb)
		free(t.tabb);
	return (0);
}
