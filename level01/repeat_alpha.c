
#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;
	int j;
	int letter;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			j = 0;
			letter = argv[1][i] - 97;
			write(1, &argv[1][i], 1);
			while (j < letter)
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
