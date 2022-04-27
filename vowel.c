#include <stdio.h>
int main ()

{
    char c;
    int LC,UC;

    printf("enter character\n");
    scanf ("%c",&c);
    //for lower case vowel
    LC=(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');

    //for upper case consonant
    UC=(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U' );

    if(LC||UC)
    {
        printf ("%c is vowel\n",c);
    }
    else
    {
        printf ("%c is consonant\n",c);
    }
    return 0;
    

}