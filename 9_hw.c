#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n;
	int t = 2;
	int i, j;
	int flag;
	scanf_s("%d", &n);

	if (n >= 2)
	{
		printf("%d \n", t);
	}

	for (i = 3; i <= n; i++)
	{
		for (j = 2; j < i ; j++)
		{
			flag = 0;
			if ((i % j) == 0)
			{
				flag++;	
				break;
			}
		}
			if (flag==0)
			{
				printf("%d\n", i);
			}	
	}
	return 0;
}
