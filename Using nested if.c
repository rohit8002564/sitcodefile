// woeking Nested if statement in c
#include<stdio.h>
int main()
{
	int a;
	printf("please enter your current age:");
	scanf("%d",&a);

	if(a < 18)
	{
		printf("consider as minor " );
		printf("NOt fit for working");
	}

	else
	{
		if(a>=18 && a<= 18)
		{
			printf("He/she is successfully eligible for woeking\n");
		
		printf("fill all the details and apply for it\n");

	}
	else
	{
		printf("Age is not satisfactory according to the organization norms\n");
		printf("Ready for retirement and collect pensiom\n");
	}
}
return 0;

}