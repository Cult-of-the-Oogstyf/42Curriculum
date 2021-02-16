/*#include <unistd.h>*/

char *ft_strcpy(char *s1, char *s2)
{
	int index = 0;

	while (s2[index])
	{
		s1[index] = s2[index];
		index++;
	}
	s1[index] = '\0';
	return (s1);
}
/*
void ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		(str)++;
	}
	return;
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_putstr(ft_strcpy(argv[1], argv[2]));
	write(1, "\n", 1);
	return (0);
}*/
