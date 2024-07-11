/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:40:46 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/11 09:47:22 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void ft_epur_str(char *str)
{
	int	i;

	i = 0;
	if(str == 0)
	{
		return ;
	}
	if (str[0] == ' ' || str[0] == '\t')
			i++;
	while (str[i])
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			write(1, &str[i], 1);
			i++;
			if (str[i] == ' ' || str[i] == '\t')
			{
				write(1, " ", 1);
				while (str[i - 1] == ' ' || str[i - 1] == '\t')
					i++;
			}
		}
	}
	write(1, "\n", 1);
}
*/



int	main(int argc, char *argv[])
{
	int	i;
	int	space = 0;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if(argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			space = 1;
		}
		else if (space)
		{
			write(1, " ", 1);
			space = 0;
		}
		i++;
	}
	write(1, "\n", 1);	
	return (0);
}