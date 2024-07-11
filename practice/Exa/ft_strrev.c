/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:31:01 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/10 20:34:21 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	len = 0;
	while (str[len])
	{
		len++;
	}
	i = -1;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		++i;
		--len;
	}
	return (str);
}

#include <stdio.h>
int	main ()
{
	char str[] = "Test1 gfsgfh 4535";
	printf("string normal : %s\n", str);	
	printf("la string reverse : %s\n", ft_strrev(str));
	return (0);
}