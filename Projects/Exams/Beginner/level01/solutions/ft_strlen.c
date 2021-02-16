/*#include <unistd.h>*/

int ft_strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return len;
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
		num *= -1;
	if (num > 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	ft_putchar(num + 48);
	return;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int len = ft_strlen(argv[1]);
		ft_putnbr(len);
	}
	write(1, "\n", 1);
	return(0);
}
*/
