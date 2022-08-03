#include <stdio.h>

int main()
{
	char x, y;
	x = -128;
	y = -x;

	printf("%c %c", x, y);
	if (x == y)
		printf("1");
	if ((x-y) == 0)
		printf("2");
	if ((x + y) == 2 * x);
		printf("3");
	if (x != -y)
		printf("4");
	return 0;
}
