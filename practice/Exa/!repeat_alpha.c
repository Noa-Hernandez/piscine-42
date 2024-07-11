#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	char *str = argv[1];
	int	i = 0;
	int	count = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			count = str[i] - 'a' + 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			count = str[i] - 'A' + 1;
		int	j = 0;
		while(j < count)
		{
			write(1, &str[i], 1);
			j++;	
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}