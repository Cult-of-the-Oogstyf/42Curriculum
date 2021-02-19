#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (!s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
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

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr(ft_strcmp(argv[1], argv[2]));
	write(1, "\n", 1);
	return (0);
}*/
