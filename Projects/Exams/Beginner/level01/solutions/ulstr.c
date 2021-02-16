#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

int main(int argc, char **argv)
{
	if (argc == 2)
		while (*argv[1])
		{
			if ((*argv[1] > 64) && (*argv[1] < 91))
				ft_putchar(*argv[1] + 32);
			else if ((*argv[1] > 96) && (*argv[1] < 124))
				ft_putchar(*argv[1] - 32);
			else
				ft_putchar(*argv[1]);
			(argv[1])++;
		}
	write(1, "\n", 1);
	return (0);
}
