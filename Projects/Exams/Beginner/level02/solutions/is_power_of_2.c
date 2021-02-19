/*#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

void ft_putnbr(int num)
{
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	if (num < 10)
		ft_putchar(num + 48);
	return;
}*/

int is_power_of_2(unsigned int n)
{
	unsigned int i = 1;

	while (i < n)
		i *= 2;
	if (i == n)
		return (1);
	return (0);
}
/*
int main()
{
	ft_putnbr(is_power_of_2(365));
	write(1, "\n", 1);
	ft_putnbr(is_power_of_2(8));
	write(1, "\n", 1);
	ft_putnbr(is_power_of_2(9));
	write(1, "\n", 1);
	ft_putnbr(is_power_of_2(20));
	write(1, "\n", 1);
	ft_putnbr(is_power_of_2(32));
	write(1, "\n", 1);
	ft_putnbr(is_power_of_2(255));
	write(1, "\n", 1);
	ft_putnbr(is_power_of_2(256));
	write(1, "\n", 1);
	return (0);
}*/
