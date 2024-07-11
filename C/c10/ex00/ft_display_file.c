/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:53:31 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/07 20:05:12 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char *filename)
{
	int		fd;
	int		r;
	char	a;

	fd = open(filename, 0);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 17);
		return (0);
	}
	r = read;
	while (read(fd, &a, 1))
	{
		if (r == -1)
			return (0);
		write(1, &a, 1);
	}
	close (fd);
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		write(2, "File name missing\n", 17);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 18);
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
