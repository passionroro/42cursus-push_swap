/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:20:27 by rohoarau          #+#    #+#             */
/*   Updated: 2022/03/03 16:52:16 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

//create tabs and index
typedef struct s_tab
{
	long	*a;
	long	*b;
	int		pos;
	int		posb;
}			t_tab;

//error_management.c
void	str_is_digit(char *s, t_tab *t);
void	check_errors(t_tab *t);

//utils.c
void	create_tab(t_tab *t, char **s, int argc);
void	ft_free_tab(t_tab *t);
int		ft_atoi_modified(const char *str, t_tab *t);

//operations_a.c
int		ra(t_tab *t);
int		rra(t_tab *t);
int		sa(t_tab *t);
int		ss(t_tab *t);
int		rrr(t_tab *t);

//operations_b.c
int		rb(t_tab *t);
int		rrb(t_tab *t);
int		sb(t_tab *t);
int		rr(t_tab *t);

//operations_pb.c
int		pb(t_tab *t);
void	decrease_size_a(t_tab *t);
void	increase_size_b(t_tab *t, int save);

//operations_pa.c
int		pa(t_tab *t);
void	decrease_size_b(t_tab *t);
void	increase_size_a(t_tab *t, int save);

//main.c
int		algorithms(t_tab *t);

//algorithm_utils.c
int		specific_pos(long *tab, int size, char specific);
long	*insertion_sort(t_tab *t);
void	simplified_sort(t_tab *t, long *a, long *a_sorted);
int		biggest_int(long *tab, int size);
void	rotate_smallest(t_tab *t, int i, int save_max);

//algorithm_small.c
int		algorithm5(t_tab *t);
int		algorithm3(t_tab *t);

//algorithm_big.c
int		algorithm100(t_tab *t, int how_many);
int		push_block(t_tab *t, int border, int x);
int		push_last_block(t_tab *t, int border, int x);
void	push_biggest(t_tab *t);
void	push_smallest(t_tab *t);

#endif
