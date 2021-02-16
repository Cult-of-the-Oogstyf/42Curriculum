#include <unistd.h>

int is_space(char c)
{
	if (((c > 7) && (c < 14)) || (c == 32))
		return 1;
	return 0;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (is_space(*argv[1]))
			(argv[1])++;
		while (!is_space(*argv[1]) && (*argv[1]))
		{
			write(1, &(*argv[1]), 1);
			(argv[1])++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
