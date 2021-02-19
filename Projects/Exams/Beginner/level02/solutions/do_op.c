#include <unistd.h>

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
	return;
}

int is_digit(char c)
{
	if ((c > 47) && (c < 58))
		return (1);
	return (0);
}

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int mul = 1;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mul = -1;
		
		i++;
	}
	while (str[i])
	{
		if (!is_digit(str[i]))
			return 0;
		res += (str[i] - 48);
		if (str[i + 1])
			res *= 10;
		i++;
	}
	return (res * mul);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int a = ft_atoi(argv[1]);
		int b = ft_atoi(argv[3]);
		if (*argv[2] == '+')
			ft_putnbr(a + b);
		else if (*argv[2] == '-')
			ft_putnbr(a - b);
		else if (*argv[2] == '/')
			ft_putnbr(a / b);
		else
			ft_putnbr(a * b);
	}
	write(1, "\n", 1);
	return (0);
}
