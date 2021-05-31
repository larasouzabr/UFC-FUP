/*program that calculates a person's age.
The program will receive the person's date of birth and the current date. The dates provided are in the format dd / MM / yyyy.
This date format means day / month / year, where the day and month will have two digits and the year 4. Prints the person's age.*/

#include <stdio.h>
int main (){
   int dia1,mes1,ano1,dia2,mes2,ano2;
    scanf("%d/%d/%d",&dia1,&mes1,&ano1);
    scanf ("%d/%d/%d",&dia2, &mes2, &ano2);
    int idade = ano2 - ano1;
    if (mes2 < mes1) { 
        idade = idade - 1; 
        printf("%d",idade);
    }
    else if ( mes2 == mes1) {
        if(dia2 < dia1) idade = idade -1;
        printf("%d",idade);
    } else printf ("%d", idade);
    
    return 1;
}
