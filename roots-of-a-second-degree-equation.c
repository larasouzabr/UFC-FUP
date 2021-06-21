


#include <stdio.h>
#include <math.h>
int main (){
    int a , b, c;
    scanf ("%d %d %d", &a, &b, &c);
    
    double form1 = pow (b,2) - (4*a*c);
    double x1 = ((-1 * b) + sqrt(form1)) / (2.0 * a);
    double x2 = ((-1 * b) - sqrt(form1)) / (2.0 * a);
    
    if (form1 == 0) printf ("%.2lf", x1);
    else if (form1 > 0) printf ("%.2lf %.2lf", x1, x2);
    else if(form1 < 0)  printf ("NTR");
    
    return 1;
}
