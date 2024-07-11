char	*ft_strcpy(char *s1, char *s2)
{
	int	i;
	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
#include <stdio.h>
int	main()
{
	char src[] = "Bonjour";
	char dest[] = "";

	printf("La source : %s\n", src);
	printf("La destination : %s\n", dest);
	ft_strcpy(dest, src);
	printf("La nouvelle destination : %s\n", dest);
}
*/