// find the largest from three numbers given by user to exlain working of if-else-if statement
#include<stdio.h>
int main ()
{
	int a,b,c;
	printf ("enter three number:\n");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b && b>c)
	{
		printf("largest = %d",a);
	}
	else if(b>a && b>c)
	{
		printf("largest = %d",b);
	}
	else
	{
		printf ("largest = %d",c);
	}

	return 0;

}