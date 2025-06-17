# include <stdio.h>
# include <stdbool.h>

int main () {

    bool isOnline  = 1 ;
    bool isStudent = 1 ;
    bool forSale   = 1 ;

   if (isOnline ) {
      printf (" you are ONLINE \n");
    }
    else {
      printf (" You are OFFLINE\n ");
    }


    if (isStudent ) {
        printf (" you are  a Student\n  ");
    }
    else {
        printf (" You are  not a Student\n ");
    }

    if(forSale) {
        printf (" That item is for sale \n");
    }
    else {
        printf ("That item is Not  for sale \n ");
    }

    return 0; 

}