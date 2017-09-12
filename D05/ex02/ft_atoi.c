int	ft_atoi(char *str)
{
	int	i;
	int neg;
	int nb;

	nb = 0;
	i = 0;
	neg = 1;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		neg *= -1;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' || str[i] <= '9')
	{
		nb = 10 * nb + (str[i] - '0');
		i++;
	}
	return (nb * neg);
}
