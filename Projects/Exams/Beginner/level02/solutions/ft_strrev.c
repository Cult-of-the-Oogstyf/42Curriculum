/*#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &(str[i]), 1);
		i++;
	}
	return;
}*/

char *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char swap;

	while (str[i])
		i++;
	i--;
	while (str[j])
	{
		swap = str[j];
		str[j] = str[i];
		str[i] = swap;
		i--;
		j++;
		if (j == i)
			break;
		if (j == (i - 1))
		{
			swap = str[j];
			str[j] = str[i];
			str[i] = swap;
			break;
		}
	}
	return (str);
}
/*
int main(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr(ft_strrev(argv[1]));
	write(1, "\n", 1);
	return (0);
}*/
