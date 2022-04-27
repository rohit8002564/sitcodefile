#include <stdio.h>
int main ()
{
    int x,t,y;
    x=5;
    y=10;
    printf("before swaping the value of x  = %d and value of y = %d\n",x,y);
    
    t=x;
    x=y;
    y=t;
    
    printf("after swaping the value of x = %d and value of y = %d\n",x,y);
    return 0;
}