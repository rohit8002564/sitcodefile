//if statement
#include <stdio.h>
int main (){
    int age;
    printf ("Enter your age :");
    scanf ("%d",&age);
    if(age>=18){
        printf ("you can vote :");

    }
    if(age<=18){
        printf ("sorry,you can not vote :");
    }
    return 0;
}