#include <iostream>

void UpPrint(int start, int end);
void LowPrint(int start, int end);

int main()
{
	int start = 0;
	int end = 0;
	bool isErr = false;

	do
	{
		scanf("%d %d", &start, &end);
		if (start < 2 || end < 2 || start > 9 || end > 9)
		{
			printf("INPUT ERROR!\n");
			isErr = true;
		}
		else
			isErr = false;
	} while (isErr == true);

	if (start <= end)
		UpPrint(start, end);
	else
		LowPrint(start, end);
	return 0;
}

void UpPrint(int start, int end)
{
	int tmp;
	for (int i = 1; i < 10 ; i++)
	{
		tmp = start;
		for (tmp; tmp <= end; tmp++)
		{
			printf("%d * %d = %2d", tmp, i, tmp * i);
			if (tmp < end)
				printf("   ");
		}
		printf("\n");
	}
}

void LowPrint(int start, int end)
{
	int tmp;
	for (int i = 1; i < 10; i++)
	{
		tmp = start;
		for (tmp; tmp >= end; tmp--)
		{
			printf("%d * %d = %2d", tmp, i, tmp * i);
			if (tmp > end)
				printf("   ");
		}
		printf("\n");
	}
}