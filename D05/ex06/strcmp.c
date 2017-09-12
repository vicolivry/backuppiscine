int strlen(char *str)
{
	int 	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

int ft_strcmp(char *s1, char *s2)
{
	return (strlen(s1) - strlen(s2));
}
