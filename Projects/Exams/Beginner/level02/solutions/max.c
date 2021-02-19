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

int max(int *tab, unsigned int len)
{
	int res = tab[0];
	unsigned int i = 1;

	if (!len)
		return (0);
	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}
/*
int main()
{
	int intArr[7] = {2, 456, 12, 98, -33, 11, 123};
	ft_putnbr(max(intArr, 7));
	write(1, "\n", 1);
	int intArr1[7] = {2, 456, 12, 98, -33, 11, 123};
	ft_putnbr(max(intArr1, 3));
	write(1, "\n", 1);
	int intArr2[7] = {2, 456, 12, 98, -33, 11, 123};
	ft_putnbr(max(intArr2, 8));
	write(1, "\n", 1);
	int intArr3[7] = {2, 34543543, 12, -1324, -233, 1, 123};
	ft_putnbr(max(intArr3, 7));
	write(1, "\n", 1);
	int intArr4[] = {};
	ft_putnbr(max(intArr4, 0));
	write(1, "\n", 1);

	return (0);
}*/
