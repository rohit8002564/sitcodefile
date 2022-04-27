#include <stdio.h>
int main ()
{
    int a;
    printf ("Enter integer number\n");
    scanf("%d",&a);
    if(a>0)
    {
    printf ("a is positive number\n");
    }
    else
    if(a<0)
    {
    printf ("a is negative number\n");
    }
    else
    {
        printf ("a is zero\n");
    }
    return 0;

}




    