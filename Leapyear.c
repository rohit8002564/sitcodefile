#include <stdio.h>
int main ()
{
    int yr;
    printf ("enter a year\n:");
    scanf ("%d",&yr);

    if (((yr % 4== 0) && (yr %100!=0)) || yr%400 == 0)

    
         printf ("\n it is leap year");

        else 
          printf ("\n it is not leap year");

    return 0;
    
}
//by rohit: