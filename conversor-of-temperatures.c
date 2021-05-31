//program that receives the temperature in degrees Celsius and converts it to Fahrenheit.
#include <stdio.h>
int main (void)
{
    float Celsius;
    scanf("%f", &Celsius);
    
    float Fahrenheit = (9*Celsius + 160)/5.0;
    printf("%f",Fahrenheit);
    return (1);
}
