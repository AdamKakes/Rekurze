#include <stdio.h>

int bunky(int x)
{
	if (x <= 1) return 2;
	else return bunky(--x) * 2;
}

int fibonacci(int x)
{
	if (x == 0) return 0;
	if (x == 1) return 1;
	return fibonacci(x - 1) + fibonacci(x - 2);
}

int urok(int x) 
{
	if (x <= 1) return 10000 * 1.01;
	else return urok(--x) * 1.01;
}

int main()
{
	printf("%d\n", urok(1));
	printf("%d\n", urok(2));
	printf("%d\n", urok(3));
	printf("%d\n", urok(4));
	printf("%d\n", urok(5));
	printf("%d\n", urok(6));
	printf("%d\n", urok(7));
}