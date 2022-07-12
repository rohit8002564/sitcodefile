// sum of odd num from 1 to 100
 #include <stdio.h>
 int main ()
 {
 	int i,sum = 0;

 	for(i=3; i<=100; i=i+3)
 	{
 		sum = sum + i;
 	}

 	printf("%d",sum);

 	 return 0;
 }