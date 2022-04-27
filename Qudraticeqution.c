#include <stdio.h>
#include <math.h>
int main ()
{
    double a,b,c,D,root1,root2,realpart,imagpart;
    printf ("enter coefficient a,b and c:\n ");
    scanf ("%1f %1f %1f",&a,&b,&c);
    D = b*b - 4*a*c;

    //condition for real and differ roots
    if(D>0){
        root1 = (-b + sqrt(D))/(2 * a);
        root2 = (+b - sqrt(D))/(2 * a);
        printf ("root1 = %.21f and root2 = %.21f",root1,root2);
    }
    // condition for real and eual roots
    else if (D == 0){
        root1 = root2 = -b/ (2*a);
        printf ("root1 = root2 = %.21f:", root1);
    }

    //if roots are not real
    else{
        realpart = -b / (2 * a);
        imagpart = sqrt(-D) /(2 * a);
        printf ("root1 = % .21f+%21fi and root2 = %.2f-%.2fi",realpart,imagpart,realpart,imagpart);
    }

    return 0;
}