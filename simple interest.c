/*calculation of simple interest*/
#include<stdio.h>
int main(){
	
	int p,n;
	float r,si;
	
	printf("enter value of p,n,r:");
	scanf("%d%d%f",&p,&n,&r);
	
	si=p*n*r/100; /*formula for si*/
	printf("%f\n",si);
	
	return 0;
}
