#include <unistd.h>

void ft_union(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	while (s1[i])
	{
		j = 0;
		l = 0;
		while (j < i)
		{
			if (s1[j] == s1[i])
			{
				l = 1;
				break;
			}
			j++;
		}
		if (!l)
			write(1, &(s1[i]), 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		j = 0;
		k = 0;
		l = 0;
		while (s1[j])
		{
			if (s1[j] == s2[i])
			{
				l = 1;
				break;
			}
			j++;
		}
		while (k < i)
		{
			if (s2[k] == s2[i])
			{
				l = 1;
				break;
			}
			k++;
		}
		if (!l)
			write(1, &(s2[i]), 1);
		i++;
	}
	return;
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
