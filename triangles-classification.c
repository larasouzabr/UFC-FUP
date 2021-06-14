/*program that takes three integers and verify that those numbers represent the interior angles of a triangle. 
If so, check which type of triangle it represents and print the following code according to each type:
sharp-angle (AC), rectangle (RE), obtuse-angle (OB). 
If it doesn't represent a triangle, print NT. */

#include <stdio.h>
int main (){
    int ang1,ang2,ang3;
    scanf ("%d %d %d", &ang1, &ang2, &ang3);
    
    int soma = ang1 +ang2 +ang3;
    
    if (soma == 180){
      if (ang1 < 90 && ang2 < 90 && ang3 < 90) printf ("AC");
      else if (ang1 == 90 && ang2 < 90 && ang3 < 90 || ang1 < 90 && ang2 == 90 && ang3 <90 || ang1 <90 && ang2 < 90 && ang3 == 90 ) printf ("RE");
       else if (ang1 > 90 && ang2 < 90 && ang3 < 90 || ang1 < 90 && ang2 > 90 && ang3 <90 || ang1 <90 && ang2 <90 && ang3 > 90 ) printf ("OB"); 
    } else  printf ("NT");
    
    return 1;
}
