
/*program that calculates the reduction in the lifetime of a smoker. 
The program will receive the amount of cigarettes smoked per day and how many years he smoked daily */
#include <stdio.h>
int main (){
    int qtd_cigarrospd,anos_fumando;
    scanf ("%d %d",&qtd_cigarrospd, &anos_fumando);
    
        int calculo_1 = (anos_fumando *365) *qtd_cigarrospd;
        int diasPerdidos = ((calculo_1 *10)/60)/24;
        printf ("%d",diasPerdidos);
    return 1;
}
