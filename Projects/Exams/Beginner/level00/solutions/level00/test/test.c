#include <stdio.h>

int main()
{
	int howOld = 50;
	int *pAge = NULL;
	pAge = &howOld;

	printf("howOld:\t%d\n", howOld);
	printf("add:\t%p\n\n", &howOld);
	printf("pAge:\t%d\n", *pAge);
	printf("add:\t%p\n", &pAge);
	printf("pAdd:\t%p\n\n", pAge);
	*pAge = 64;
	printf("howOld:\t%d\n", howOld);
	printf("pAge:\t%d\n\n", *pAge);
	*pAge += 1;
	printf("howOld:\t%d\n", howOld);
	printf("pAge:\t%d\n", *pAge);
	pAge += 1;
	printf("howOld:\t%d\n", howOld);
	printf("pAge:\t%d\n", *pAge);

	return (0);
}
