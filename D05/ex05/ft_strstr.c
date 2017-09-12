char *ft_str(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		if (str[i] == to_find[0])
			return (str[i]);
		i++;
	}
	return NULL;		
}


