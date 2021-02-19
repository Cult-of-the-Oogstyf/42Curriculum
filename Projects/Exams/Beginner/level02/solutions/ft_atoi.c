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
		ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	if (num < 10)
		ft_putchar(num + 48);
}*/

int ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;
	int mul = 1;

	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			mul = -1;
		i++;
	}
	while (str[i])
	{
		res += (str[i] - 48);
		if (str[i + 1])
			res *= 10;
		i++;
	}
	return (res * mul);
}
/*
int main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}*/
