#include <stdlib.h>
/*#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		(str)++;
	}
	return;
}*/

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int i = 0;
	char *pSrc;

	if (!(pSrc = (char*)malloc((sizeof(char)  * ft_strlen(src)) + 1)))
		return NULL;
	while (src[i])
	{
		pSrc[i] = src[i];
		i++;
	}
	pSrc[i] = '\n';
	return (pSrc);
}
/*
int main(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr(ft_strdup(argv[1]));
	write(1, "\n", 1);
	return (0);
}*/
