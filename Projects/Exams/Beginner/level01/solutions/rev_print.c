#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int index = 0;
		while (argv[1][index])
			index++;
		index--;
		while (index > -1)
		{
			write(1, &(argv[1][index]), 1);
			index--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
