i/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 20:23:51 by volivry           #+#    #+#             */
/*   Updated: 2017/09/07 20:49:18 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0; 
	//k = 0 ;
	//l = 1;
	while(i <= 8)
	{
		while(j <= 9)
		{
			if(i < j)
			{
				ft_putchar('0' + i);
				ft_putchar('0' + j);
				ft_putchar(' ');
			}
		}
	}
}

int main()
{
	ft_print_comb2();
	return(0);
}
