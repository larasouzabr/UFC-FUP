/*We will have 3 notes. In the following situations, the student will be approved:
1 - If the average of the 3 grades is greater than or equal to 7 the student is approved.
2 - If the average is greater than 5 and your third grade is greater than or equal to 7.
3 - If the difference between the highest grade and the lowest grade is less than or equal to 3.
Otherwise the student will already fail.
the program will receive the student's three grades and print "Approved" if the student passed or "Failed".*/


#include <stdio.h>
int main (){
    float nota1,nota2,nota3;
    scanf ("%f %f %f", &nota1, &nota2,&nota3);
    float media = (nota1 + nota2 +nota3)/3;
    
    if (media >= 7)printf ("Aprovado");
    else if ( media > 5 && nota3 >= 7) printf ("Aprovado");
    else  {
    
    float maior;
    
    if (nota1 >= nota2 && nota1 >= nota3) maior = nota1;
   else if ( nota2 >= nota3) maior = nota2;
    else  maior = nota3;
    
    float menor;
    
    if (nota1 <= nota2 && nota1 <= nota3) menor  = nota1;
   else if (nota2 <= nota3) menor = nota2;
   else menor = nota3; 
   
    if ( maior - menor <=3 ) printf ("Aprovado");
    else printf ("Reprovado");
    }
    
    return 1;
}
