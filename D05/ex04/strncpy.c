#include <stdio.h>

char *strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int 	i_src;
	int 	i_dest;

	i = 0; 
	i_src = 0;
	i_dest = 0;
	while (i < n)
	{
		dest[i_src] = src[i_src];
		i++;
		i_src++;
		i_dest++;
	}
	return dest;
}

int main(void)
{
	printf("%d\n", strncpy(" ", "Coucou", 3);
	return (0);
}
