/*  CAGECE is promoting a water conservation campaign, 
distributing booklets and promoting actions demonstrating the importance of water for life and for the environment.
To further encourage water savings, it changed the prices of its supply so that, proportionally, 
those customers who consume less water pay less per cubic meter.
Every customer pays a monthly subscription of R$7, which includes a deductible of 10 m³ of water.
That is, for any consumption between 0 and 10 m³, the consumer pays the same amount of R$7 reais (note that the subscription fee must be paid 
even if the consumer has not consumed water).
Above 10 m³ each subsequent cubic meter has a different value depending on the consumption range. 
CAGECE only charges for whole amounts of cubic meters consumed. The table below specifies the price per cubic meter for each consumption range:
Consumption range (m³) Price (m³)
up to 10 included in the deductible
11 to 30 BRL 1
31 to 100 R$ 2
101 onwards R$ 5
The program receives an integer amount of water consumed in m3 and calculates the amount of the water bill.      */

#include <stdio.h>
int main (){
    int valor_m3;
    scanf ("%d", &valor_m3);
    
    int assinatura = 7;
    
        if (valor_m3 >= 11){
        if (valor_m3 <30) assinatura = assinatura + (valor_m3 - 11 +1) *1;
        else assinatura = assinatura + 20;
    }
    if (valor_m3 >=31){
        if (valor_m3 < 100) assinatura = assinatura + (valor_m3 -31 +1) *2;
       else assinatura = assinatura + 70 *2;
    }
    if (valor_m3 >= 101){
        assinatura = assinatura + (valor_m3 -101 +1) *5;
    }
    
printf ("R$ %d", assinatura);    
    
    return 1;
}
