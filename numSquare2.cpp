#include <iostream>

int main()
{
	int length = 0;
	int count = 1;
	scanf("%d", &length);
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			printf("%d", count + j * length);
			if (j < length)
				printf(" ");
		}
		printf("\n");
		count++;
	}
	return 0;
}