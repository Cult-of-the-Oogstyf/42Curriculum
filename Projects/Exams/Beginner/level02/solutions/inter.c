#include <unistd.h>

void ft_inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	while (s1[i])
	{
		j = 0;
		k = 0;
		l = 0;

		while (k < i)
		{
			if (s1[i] == s1[k])
			{
				i++;
				l = 1;
				break;
			}
			k++;
		}
		if (!l)
		{
			while (s2[j])
			{
				if (s2[j] == s1[i])
				{
					write(1, &(s2[j]), 1);
					break;
				}
				j++;
			}
			i++;
		}
	}
	return;
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
