// sum of even num from 1 to 100

#include <stdio.h>
int main ()
{
	int i,sum = 0;

	for(i=2; i<=100; i = i + 2)
	{
		sum = sum + i;
	}

	 printf("%d",sum);
     
     return 0;
}