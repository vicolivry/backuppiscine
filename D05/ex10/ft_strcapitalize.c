char *ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || str[i] > 123)
		{	
			if ((str[i + 1] >= 65 && str[i + 1] <= 90) || (str[i + 1] >= 97 && str[i + 1] <= 122))	
				str[i + 1] = str[i - 32];
		}
		i++;
	}
	return (str);
}
