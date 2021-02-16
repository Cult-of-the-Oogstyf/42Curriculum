#include <unistd.h>

void repeat(char *str)
{
	int repeat;

	while (*str)
	{
		repeat = 1;
		if ((*str > 64) && (*str < 91))
			repeat = (*str - 64);
		else if ((*str > 96) && (*str < 123))
			repeat = (*str - 96);
		while (repeat)
		{
			write(1, &(*str), 1);
			repeat--;
		}
		(str)++;
	}
	return;
}

int main(int argc, char **argv)
{	
	if (argc == 2)
		repeat(argv[1]);
	write(1, "\n", 1);
	return (0);
}
