#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;
	length = 0;
	while(str[length])
	{
		length++;
	}
	return(length);
}
char	ft_strdup(char *src)
{
	int	i;
	int size;
	char *dest;

	i = 0;

	if(src == NULL || src[0] == '\0')
		return (0);

	dest = malloc(sizeof(char) * (ft_strlen(src + 1)));
	if (dest == NULL)
		return (NULL);
	while(src[i])
	{
		dest[i] = src[i];;
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "hello World!";
	char *dest;

	dest = ft_strdup(src);

	if (src == NULL)
	{
		printf("erreur");
		return(1);
	}
	printf("duplique : %s\n", dest);

	free(dest);
	return(0);
}