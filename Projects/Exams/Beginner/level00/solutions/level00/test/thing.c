#include <unistd.h>
#include <stdio.h>

int main()
{
	char a[] = "This is simple a test.";
	/*int *p = &a[0];
	printf("%d ", *(p++));
	printf("%d\n", *p);*/
	//int *p = a; // The 1st item in an array is a pointer.
	/*printf("%d ", *(p++));
	printf("%d\n", *p);*/
	char *p = a;
	printf("%c ", *p);
	(*p)++;
	printf("%c ", *p);
	printf("%s\n", p);
	return (0);
}
