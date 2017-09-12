#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, 1c, 1);
}

void 	ft_put_min_int(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_put_min_int();	
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= - 1;
	}
	while (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb % 10;
	}
	ft_putchar('0' + nb);
}
