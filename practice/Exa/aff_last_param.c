#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc - 1;
	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}