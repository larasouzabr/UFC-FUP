#include <stdio.h>
int main (){
    float num;
    scanf ("%f",&num);
    if (num<0){
	num = num/-1,0;
	printf ("%.2f",num);
}else printf ("%.2f",num);
    return 1;
}
