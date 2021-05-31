//a program that receives the capital, interest rate (in percentage) and time and calculates how much this application will yield in the end.
#include <stdio.h>
#include <math.h>
int main (){
    double c,i;
    int t;
    scanf ("%lf %lf %d", &c, &i, &t);
    float M = c * pow(1 + i/100, t);
    float juros = M - c;
    float rend = 100 * (juros/c);
    printf("A aplicacao rendeu %.2f reais que equivale a um rendimento percentual de %.2f%%.", juros, rend);
    return 1;
}
