#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int b;
	int c=1;
	int d;
	int partial_quotient=0;
	scanf_s("%d %d", &a, &b);
	do {
		d = b;
		d=b*c;
		c++;
		partial_quotient++;
	} while ((a-b) >= d);
	printf("%d\n", partial_quotient);
	system("pause");
	return 0;

}
