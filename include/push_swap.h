#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

//create tab and give index
typedef struct s_tab
{
	int	*tab;
	int	pos;
}		t_tab;

//error_management.c
void	str_is_digit(char *s);
void	check_not_sorted(t_tab *t);
void	create_tab1(char **argv, t_tab *t);
void	create_tab2(int argc, char **argv, t_tab *t);

//operations
void	sa(t_tab *t);
void	ra(t_tab *t);
void	rra(t_tab *t);

#endif
