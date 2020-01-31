
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[2][i] != '\0')
		{
			if (argv[2][i] == argv[1][j])
			{
				j++;
			}
			i++;
		}
		if (ft_strlen(argv[1]) == j)
		{
			ft_putstr(argv[1]);
		}
	}
	write(1, "\n", 1);
	return (0);
}
