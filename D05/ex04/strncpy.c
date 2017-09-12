#include <stdio.h>

char *strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int 	index;

	i = 0; 
	index = 0;
	while (i < n)
	{
		dest[index] = src[index];
		i++;
		index++;
	}
	return dest;
}

int main(void)
{
	printf("%d\n", strncpy(" ", "Coucou", 3);
	return (0);
}
