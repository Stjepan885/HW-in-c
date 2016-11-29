#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int j;
	int f;
	int g;


	int m, n;
	scanf_s("%d%d", &m, &n); 
	
	int array[1000];

	for (j = 1; j <= m + n; j++) {
		scanf_s("%d", &array[j] );
		}	
	f = m;
	g = 1;
	for ( i = 1; i <= m; i++)
	{
		
		for ( j = f; j <=(m+n-g) ; j++)
		{
			
			array[j] += array[j + 1]; 
			array[j + 1] = array[j] - array[j + 1]; 
			array[j] -= array[j + 1]; 
			
		}
		f--;
		g++;
	}


	for (j = 1; j <= m + n; j++)
	{
		printf("%d ", array[j]); 
	}

	return 0;
}
