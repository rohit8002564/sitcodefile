/*what will be the outputof the following program*/
#include<stdio.h>
int main()
{
	int i = 2,j=3,k,l;
	float a,b;
	k=i/j;
	l=j/i*j;
	a=i/j*j;
	b=j/i*i;
	printf("%d%d%f%f\n",k,l,a,b);
	return 0;
}
