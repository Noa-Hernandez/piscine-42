void ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>
int	main()
{
	int c = 10;
	int d = 5;
	ft_swap(&c, &d);
	printf("la valeur de a est %d et la valeur de b est %d\n", c, d);
}