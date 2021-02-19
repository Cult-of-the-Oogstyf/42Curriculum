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

int wdmatch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		while (s2[j])
		{
			if (s2[j] == s1[i])
				break;
			j++;
		}
		if (!s2[j])
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		if (wdmatch(argv[1], argv[2]))
			ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
