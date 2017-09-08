/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 08:55:14 by volivry           #+#    #+#             */
/*   Updated: 2017/09/08 10:47:05 by volivry          ###   ########.fr       */
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
	int y;
	int z;
	
	i = 0;
	j = 0;
	y = 0;
	z = 1;
	while(i <= 9)
	{
		while(j <= 9)
		{
			while(y <= 9)
			{
				while(z <= 9)
				{
					if(i + j < y + z)
					{
						if(y >= i && z > j)
						{
							ft_putchar('0' + i);
							ft_putchar('0' + j);
							ft_putchar(' ');
						}
					}
					if(i + j < y + z)
					{
						if(y >= i && z > j)
						{
							ft_putchar('0' + y);
							ft_putchar('0' + z);
						
						if(i != 9 ||  j != 8)
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
						}
					}
					z++;
				}
				z = 0;
				y++;
			}
			y = 0;
			j++;	
		}
		j = 0;
		i++;	
	}
}

int main()
{
	ft_print_comb2();
	return(0);
}
