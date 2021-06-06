/*program that will receive the gender (F or M), age, length of contribution in months and the monthly contribution amount.
If you are male and under the age of 90, the percentage of addition will be provided.
If you are a female, the minimum wage and percentage of increase will be provided.*/
#include <stdio.h>
int main (){
    char sexo;
    float idade, tempo_de_contri_mes,valor_mensal;
    scanf ("%c %f %f %f", &sexo,&idade,&tempo_de_contri_mes,&valor_mensal);
    int ate_cem = 100 - idade;
    float total_tempo_contribuiu = tempo_de_contri_mes * valor_mensal;
    float valor_aposen = total_tempo_contribuiu / (ate_cem * 12);
    
   
    if (sexo == 'M'){
        if (idade >= 90){
                
            valor_aposen = valor_aposen + (valor_aposen * 1.5 - valor_aposen) ;
        }else {
        float percent_acres;
        scanf ("%f",&percent_acres);
        valor_aposen = valor_aposen + valor_aposen * percent_acres;
		}
	}
    else {
        float salario_min, percent_acres;
        scanf ("%f %f",&salario_min,&percent_acres);
        valor_aposen =valor_aposen + valor_aposen * percent_acres;
        if (valor_aposen < salario_min){
            valor_aposen = salario_min;
        }else 
        valor_aposen =valor_aposen;
    }
    printf ("%.2f",valor_aposen);
    
    return 1;
}
