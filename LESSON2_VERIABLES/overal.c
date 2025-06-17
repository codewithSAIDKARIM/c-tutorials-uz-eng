#include <stdio.h>
#include <stdbool.h>

int main ()  {

    char name [] = "saidkarim";
    int age        = 18;
    float height   = 1.85;
    double balance = 30000000.00;
    bool isStudent = true ;

    printf ("Name       : %s\n",name );
    printf ("Age        : %d\n",age );
    printf ("Height     : %.2f\n ", height);
    printf (" Balance  : %.2lf\n ",balance );
    printf ("Balance   : %.2lf\n ", balance );
    printf ("Is Student: %s\n ",isStudent ? "Yes " : "No");


return 0;

}