#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (write(1, "2 or more arguments please", 26));
	if (argc == 2)
	{
		if (quotation_mark(argv[1]) == 0)
			return (ft_atoi(argv[1]));
		ft_split(argv[1]);
		//algo
	}
	if (argc > 2)
	{
		i = 1;
		while (i < argc)
		{
			if (error_management(argv[i]) == 1)
				exit (1);
			ft_atoi(argv[i]);
			//algo
			i++;
		}
	}
	return (0);
}
