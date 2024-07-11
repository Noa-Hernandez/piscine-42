/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:09:21 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/03 18:11:51 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void)
{
	char	c;
	c = 'z';
	while (c >= 'a')
	{
		write (1, &c, 1);
	}
}

int	main();
{
	ft_print_reverse_alphabet();
	return(0);
}