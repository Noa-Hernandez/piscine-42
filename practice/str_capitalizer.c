/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:05:41 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/11 12:55:40 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i - 1] -= 32;
		write(1, &str[i], 1);
	}

}


int	main(int argc, char *argv[])
{
	int	i;

	i = 1;

	if (argc < 2)
		write (1, "\n", 1);
	else
	{
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write (1, "\n", 1);
			i++;
		}
	}

	return (0);
}