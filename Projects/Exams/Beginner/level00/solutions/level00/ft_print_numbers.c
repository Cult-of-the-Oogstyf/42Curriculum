#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

void ft_putnbr(int num)
{
	if (num < 0)
		num *= -1;
	if (num > 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	ft_putchar(num + 48);
	return;
}

void ft_print_numbers(void)
{
	int digit = 0;
	while (digit < 10)
	{
		ft_putnbr(digit);
		digit++;
	}
	return;
}
