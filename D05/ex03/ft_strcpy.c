#include <stdio.h>

char *strcpy(char *dest, char *src)
{
	int	i;

	i = 0; 
	while (str[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}

int main(void)
{
	printf("%d\n", strcpy("wouhou"; "wahaha"));
	return (0);
}
