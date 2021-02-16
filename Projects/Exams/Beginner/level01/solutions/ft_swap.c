/*#include <unistd.h>*/

void ft_swap(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
	return;
}

/*
void ft_putstr(char c)
{
	write(1, &c, 1);
	return;
}

void ft_putnbr(int num)
{
	if (num < 0)
		num += -1;
	if (num > 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	ft_putstr(num + '0');
	return;
}

int main()
{
	int a = 5, b = 6;

	ft_putnbr(a);
	write(1, " - ", 3);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	ft_putnbr(a);
	write(1, " - ", 3);
	ft_putnbr(b);
	write(1, "\n", 1);
	return (0);
}*/
