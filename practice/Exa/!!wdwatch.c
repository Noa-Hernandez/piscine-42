/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdwatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:38:51 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/10 16:17:22 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s2[j] && s1[i] != s2[j])
			++j;
		if (!s2[j])
		{
			write(1, "\n", 1);
			return ;
		}
		++i;
		++j;
	}
	write (1, s1, i);
	write(1, "\n", 1);
}

int	main (int argc, char *argv[])
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	else
		write(1, "\n", 1);
	return (0);
}