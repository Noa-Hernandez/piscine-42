#include <unistd.h>
/*
int	main(int argc, char *argv[])
{
	int	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
			}
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
		return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rot13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'M')
			ft_putchar(str[i] + 13);
		else if (str[i] >= 'N' && str[i] <= 'Z')
			ft_putchar(str[i] - 13);
		else if (str[i] >= 'a' && str[i] <= 'm')
			ft_putchar(str[i] + 13);	
		else if (str[i] >= 'n' && str[i] <= 'z')
			ft_putchar(str[i] - 13);	
		else
			ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
	return (*str);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_rot13(argv[1]);
	}
	else
		write (1, "\n", 1);
	return (0);
}