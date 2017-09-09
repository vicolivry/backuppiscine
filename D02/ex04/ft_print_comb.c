/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 15:15:53 by volivry           #+#    #+#             */
/*   Updated: 2017/09/09 15:33:03 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_result(i, j, k)
{
	if (i < j && j < k)
	{
		ft_putchar('0' + i);
		ft_putchar('0' + j);
		ft_putchar('0' + k);
		if (i != 7)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				ft_print_result(i, j, k);
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i ++;
	}
}
