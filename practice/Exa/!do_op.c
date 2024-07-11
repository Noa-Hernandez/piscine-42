/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:21:02 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/10 17:31:27 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	long value1;
	long value2;
	long result;

	if (argc == 4)
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[3]);
		if (*argv[2] == '+')
			result = value1 + value2;
		else if (*argv[2] == '-')
			result = value1 - value2;
		else if (*argv[2] == '*')
			result = value1 * value2;
		else if (*argv[2] == '/')
			result = value1 / value2;
		else
			result = value1 % value2;	
		if (result >= -2147483648 && result <= 2147483647)
			printf("%d", (int)result);
	}
	printf("\n");
	return (0);
}