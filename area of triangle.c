/*find the area of a triangle,given its sides*/
#include <stdio.h>
#include <math.h> /*for sqrt*/
int main(){
	float a,b,c,sp,area;
	printf("\nEnter sides of triangle:");
	scanf("%f,%f,%f",&a,&b,&c);
	sp=(a+b+c)/2;
	area = squrt(sp*(sp-a)*(sp-b)*(sp-c));
	printf("Area of triangle=%f\n",area);
	return 0;
}


