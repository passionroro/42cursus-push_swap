#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

//create tabs and index
typedef struct s_tab
{
	int	*tmp;
	int	*sort;
	int	*tab;
	int	*tabb;
	int	pos;
	int	posb;
	int	ret;
}		t_tab;

//error_management.c
void	str_is_digit(char *s);
void	check_errors(t_tab *t);
void	create_tab_1(char **argv, t_tab *t);
void	create_tab_2(int argc, char **argv, t_tab *t);
void	create_tab_b(t_tab *t);

//operations_a.c
int	ra(t_tab *t);
int	rra(t_tab *t);
int	sa(t_tab *t);
int	ss(t_tab *t);
int	rrr(t_tab *t);

//operations_b.c
int	rb(t_tab *t);
int	rrb(t_tab *t);
int	sb(t_tab *t);
int	rr(t_tab *t);

//operations_pb1.c
int	pb(t_tab *t);
int	*decrease_size_a(t_tab *t);
int	*increase_size_b(t_tab *t, int save);

//operations_pb1.c
int	pa(t_tab *t);
int	*decrease_size_b(t_tab *t);
int	*increase_size_a(t_tab *t, int save);

//algorithm_main.c
int	algorithms(t_tab *t);

//algorithm_utils.c
int	smallest_pos(t_tab *t);

//algorithm_small.c
int	algorithm5(t_tab *t);
int	algorithm3(t_tab *t);

//algorithm_big.c
int	algorithm100(t_tab *t);
int	algorithm500(t_tab *t);
int	*insertion_sort(t_tab *t);

//TO DELETE
void	ft_print_tab(t_tab *t);

#endif
