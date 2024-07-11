/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:59:50 by nohernan          #+#    #+#             */
/*   Updated: 2024/07/02 13:52:08 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_final_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	total_size;

	total_size = 0;
	i = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		i++;
	}
	total_size += (size - 1) * ft_strlen(sep);
	return (total_size);
}

void	ft_copy_final_str(char *final_dest, int size, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcpy(final_dest, strs[i]);
		final_dest += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(final_dest, sep);
			final_dest += ft_strlen(sep);
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	char	*final;

	if (size == 0)
	{
		final = malloc(1);
		if (!final)
			return (NULL);
		*final = '\0';
		return (final);
	}
	total_size = ft_final_total_size(size, strs, sep);
	final = malloc((total_size + 1) * sizeof(char));
	if (!final)
		return (NULL);
	ft_copy_final_str(final, size, strs, sep);
	*(final + total_size) = '\0';
	return (final);
}
