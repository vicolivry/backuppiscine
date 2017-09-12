#include <stdio.h>

char *strcpy(char *dest, char *src)
{
	int	i;
	it	j;

	i = 0; 
	j = 0;
	while (str[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j + 1] = '\0';
	return (dest);
}

int main(void)
{
	printf("%d\n", strcpy("wouhou"; "wahaha"));
	return (0);
}
