int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	minus;

	result = 0;
	i = 0;
	minus = 1;
	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
		i++;
	if(str[i] == '-')
		minus = -1;
	if (str[i] == '-' && str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return(result * minus);
}

#include <stdio.h>
int	main()
{
	char *str = "   4543+543sdgsd24";
	int	result = ft_atoi(str);
	printf("Conversion avec atoi : %d\n", result);
	return(0);
}