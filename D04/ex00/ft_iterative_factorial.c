/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 19:35:17 by volivry           #+#    #+#             */
/*   Updated: 2017/09/10 20:36:32 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb == 0 || nb == 1)
			return (1);
	while (nb > 1)
	{
		nb = nb - 1;
		fact = fact * nb;
	}
	return (fact);
}
