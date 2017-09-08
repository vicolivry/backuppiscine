/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 20:05:12 by volivry           #+#    #+#             */
/*   Updated: 2017/09/08 20:44:45 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(*(str + i) != '\0')
	{
		i++;
	}
	return(i);
}

int main()
{
	ft_strlen("Ciao !");
	return(0);
}
