// find the largest number of the three
#include <stdio.h>
int main ()
{
	int a,b,c;
	printf ("enter three number\n:");
	scanf("%d% d %d",&a,&b,&c);

	if(a>b && a>c)
	{
		printf ("%d a is largest number",a);
	}

	if(b>a && b>c)
	{
		printf ("%d b is largest number",b);
	}

	if(c>a && c>b)
	{
		printf ("%d c is largest number",c);
	}

	
	return 0;
}

