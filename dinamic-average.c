/* 
program that will calculate the simple average of integer numbers provided by the user,
and the amount of numbers provided can vary between 2 numbers, 3 numbers and 4 numbers.

In the first line of the entry, the number of numbers will be given.
On the second line the numbers will be provided.
*/

#include <stdio.h>
int main (){
    float qtd_numeros;
    scanf ("%f", &qtd_numeros);
    float num1,num2,num3,num4;
    double media;
    if (qtd_numeros == 2){
        scanf ("%f %f", &num1,&num2);
        double media = (num1 +num2)/ qtd_numeros;
          printf ("%.3lf", media);
    }
    if (qtd_numeros == 3){
        scanf ("%f %f %f", &num1, &num2,&num3);
        double media = (num1 +num2+num3)/qtd_numeros;
          printf ("%.3lf", media);
    } 
    if (qtd_numeros == 4){
        scanf ("%f %f %f %f", &num1, &num2,&num3, &num4);
         double media = (num1 +num2+num3+num4)/qtd_numeros;
           printf ("%.3lf", media);
    }
    return 1;
}
