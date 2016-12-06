#include <stdio.h>
#include <stdlib.h>

int main() {

	char s[1000];
	gets_s(s);
	int i;
	int n = 0;

	for ( i = 0; i < _mbstrlen(s); i++)
	{

		if (s[i]=='(')
		{
			n = n + 1;
		}
		if (s[i] == ')')
		{
			n = n - 1;
		}
		if (n<0)
		{
			break;
		}
	}
	if (n == 0)
	{
		printf("Balance is correct \n");
	}
	else
	{
		printf("Balance is not correct \n");
	}

	return 0;

}
