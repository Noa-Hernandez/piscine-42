/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:04:12 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/10 15:23:23 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char c)
{
	if (c >= 'a' && c <= 'z')
		c = 'z' - (c - 'a');
	if (c >= 'A' && c <= 'Z')
		c = 'Z' - (c - 'A');
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
		while (argv[1][i])
			alpha_mirror(argv[1][i++]);
	write (1, "\n", 1);
	return (0);
}