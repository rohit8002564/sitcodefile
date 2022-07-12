// write a program to calulate sum of natural number
#include <stdio.h>
int main()
{
	int num,i,sum = 0;
	printf("Enter number\n:");
	scanf("%d",&num);

	for(i = 1; i<=num; i++)
	{
		sum = sum + i;
	}

printf("sum is %d",sum);
   
   return 0;

}