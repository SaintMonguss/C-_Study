#include <iostream>

int main()
{
	int length = 0;
	scanf("%d", &length);
	for (int i = 1; i <= length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			printf("%c", (((length * length) - (length * j) - i) % 26) + 65);
			if (j < length)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}