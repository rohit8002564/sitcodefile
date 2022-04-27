#include <stdio.h>
#include <math.h>
int main ()

{
float =  a,b,c;
float root1,root2;

float root_part,Denom;
printf ("enter the value of a,b and c\n");
scanf ("%f %f %f,&a,&b,&c");
root_part = sqrt(b*a-4*a*c);
Denom = 2*a
root1 = (-b+root_part)/Denom;
root2 = (-b-root_part)/Denom;
printf ("Root1=%f\nRoot2=%f",root1,root2);
return 0;
}