#include <stdio.h>
#include <stdlib.h>

int main()
{
	int br = 0;
    int s;   
    int a,b; 
	int z;
    
	for (s = 0; s <=999999; s++)
    {

		a = ((s % 10) + ((s / 10) % 10) + ((s / 100) % 10));
		z = s / 1000;
		b = ((z % 10) + ((z / 10) % 10) + ((z / 100) % 10));

        if (a == b)
        {
            br++;		
		}
    }

    printf("%d\n", br);

    return 0;
}
