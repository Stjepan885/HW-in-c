#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[1000];
	int n;
	int i;
	int zero=0;
	scanf_s("%d", &n);

	for (i = 1; i <=n ; i++)
	{
		printf("[%d] = ", i );
		scanf_s("%d", &array[i]);
		if (array[i] == 0)
		{
			zero++;
		}
	}

	printf_s("%d \n", zero);

	return 0;
}
