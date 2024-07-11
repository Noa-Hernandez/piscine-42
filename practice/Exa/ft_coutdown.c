#include <unistd.h>

/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "9876543210\n", 11);
	}
	(void)argv;
}
*/

int	main(void)
{
	write(1, "9876543210\n", 11);
}