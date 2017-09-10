/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 16:23:32 by volivry           #+#    #+#             */
/*   Updated: 2017/09/10 20:00:15 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	neg;

	i = 0;
	nb = 0;
	neg = 1;
	while ((str[i] >= 8 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
		neg *= -1;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' )
	{
		nb = nb * 10 + ( str[i] - '0');
		i++;
	}
	return (nb * neg);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Own atoi: %d\n", ft_atoi(av[1]));
		printf("True atoi; %d\n", atoi(av[1]));
	}
	return (0);
}
