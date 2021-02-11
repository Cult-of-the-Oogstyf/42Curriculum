#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "z", 1);
	else
		while (*argv[1])
		{
			if ((*argv[1]) == 'z')
			{
				write(1, "z", 1);
				break;
			}
			(argv[1])++;
		}
	write(1, "\n", 1);
	return (0);
}
