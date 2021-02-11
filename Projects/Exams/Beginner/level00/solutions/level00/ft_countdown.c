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
	ft_putchar(num + 48); // 48 == '0'
	return;
}

int main()
{
	int num = 9;
	while (num > -1)
	{
		ft_putnbr(num);
		num--;
	}
	ft_putchar('\n');
	return (0);
}
