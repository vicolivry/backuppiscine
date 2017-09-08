/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 20:05:12 by volivry           #+#    #+#             */
/*   Updated: 2017/09/08 20:31:17 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while(*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}		
}

int main()
{
	ft_putstr("Ciao les nazes !");
	return(0);
}
