//calculation of simple interest for 3 sets of p, n and r
#include <stdio.h>
int main ()
{
	int p,n,count;
	float r,si;

	for(count = 1; count<=3; count = count + 1)
	{
		printf("enter value of p,n and r\n:");

		scanf("%d %d %f",&p,&n,&r);

		si = p*n*r/100;

		printf("simple interest = Rs.%f\n",si);
	}

	return 0;
}
