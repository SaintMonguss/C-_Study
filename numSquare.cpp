#include <iostream>

int n = 0;
int m = 0;
int line = 0;

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		if(line%2 == 0)
			for (int j = 1; j <= m; j++)
			{
				printf("%d", (line*m)+j);
				if (j != m)
					printf(" ");
			}
		else
			for (int j = 0; j < m; j++)
			{
				{
					printf("%d", ((line+1) * m) - j);
					if (j != m)
						printf(" ");
				}
			}

		printf("\n");
		line++;
	}
}