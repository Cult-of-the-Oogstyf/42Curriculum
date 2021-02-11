#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

int main()
{
	int ascii = 97;
	while (ascii < 123)
	{
		if (ascii % 2 == 0)
			ft_putchar(ascii - 32);
		else
			ft_putchar(ascii);
		ascii++;
	}
	ft_putchar('\n');
	return (0);
}
