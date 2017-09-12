int strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (strlen(s1) > n && strlen(s2) > n)
		return (0);
	if (strlen(s1) > n && strlen(s2) < n)
		return (n - strlen(2));
	if (strlen(s1) < n && strlen(s2) > n)
		return (strlen(s1) - n);
	return (strlen(s1) - strlen(s2));	
}

