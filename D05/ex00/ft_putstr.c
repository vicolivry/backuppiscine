#include <#unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(* str)
{
	int	i;
	i = 0;

	while (str[i] != '\n')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(void)
{
	ft_putstr("Salut les bolos");
	return (0);
}
