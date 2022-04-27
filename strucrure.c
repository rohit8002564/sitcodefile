               //STRUCTRURE IN C
//syntax:-  struct structure name
          //  {
          //      structure elements1;
            //    structure elements2;
              //  structure elements3;
               //    .
                //   .
                //   .
           //       };
#include <stdio.h>
struct student
{
    int id;
    int marks;
    char fav_char;

};
int main ()
{
    struct student rohit, mohan, sohan;
    rohit.id=1;
    mohan.id=2;
    sohan.id=3;
    rohit.marks=388;
    mohan.marks=256;
    sohan.marks=399;
    rohit.fav_char='t';
    mohan.fav_char='r';
    sohan.fav_char='0';
    printf ("rohit got\n%did   \n%drohit.marks   \n%cfav_char", rohit.id,rohit.marks,  rohit.fav_char  );
    
    return 0;
}

