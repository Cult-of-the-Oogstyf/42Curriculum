#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		(str)++;
	}
	return;
}

int main()
{
	ft_putstr("This is a test\n");
	return (1);
}
