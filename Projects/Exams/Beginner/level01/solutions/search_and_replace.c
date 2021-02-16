#include <unistd.h>

int ft_len(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return len;
}

int main(int argc, char **argv)
{
	if (argc == 4)
		if ((ft_len(argv[2]) == 1) && (ft_len(argv[3]) == 1))
			while (*argv[1])
			{
				if (*argv[1] == *argv[2])
					write(1, &(*argv[3]), 1);
				else
					write(1, &(*argv[1]), 1);
				(argv[1])++;
			}
	write(1, "\n", 1);
	return (0);
}
