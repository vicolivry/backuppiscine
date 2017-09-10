/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 20:38:07 by volivry           #+#    #+#             */
/*   Updated: 2017/09/10 20:57:30 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb;

	if (i > 1)
	{
		nb = ft_recursive_factorial(nb - 1);
		i++;
	}
		return (nb);
}

int main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return 0;
}
