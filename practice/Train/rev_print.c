/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohernan <nohernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:03:17 by nohernan          #+#    #+#             */
/*   Updated: 2024/06/29 11:54:29 by nohernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *rev_print(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    while(i > 0)
    {
    i--;
    write(1, &str[i], 1);
    }
    return(str);
}

int main()
{
    write(1, "Bonjour", 7);
    write(1, "\n", 1);
    rev_print("Bonjour");
    return (0);
}