#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**tab;
	int	i;

	if (argc < 2)
		return (write(1, "2 or more arguments please\n", 27));
	if (argc == 2)
	{
		if (!ft_strchr(argv[1], ' '))
		{
			printf("%c\n", argv[1][0]);
			return (write(1, "0\n", 2));
		}
		tab = ft_split(ft_strtrim(argv[1], "\""), ' ');
		if (!tab)
			return (0);
	}
	i = 0;
	while (i < argc - 1)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	while (1);
	//i = 1;
	//while (i < argc)
	//{
		//if (error_management(argv[i]) == 1)
		//	exit (1);
		//ft_atoi(argv[i]);
		//algo
	//	i++;
	//}
	return (0);
}
