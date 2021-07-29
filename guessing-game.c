/* this program asks you to think about a number and then let the computer guess based on your answer 
if its less than what you chose(m),bigger(M) or if it guess it right(A) and then it shows in how many tries he did it. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));
    int tentativas=0;
    int chute_computador;
    char resposta_usuario;
    
    int inf=1,sup=1024;
    printf ("Pense em um numero inteiro entre 1 e 1024 depois tecle enter para comecarmos");
    getchar();
   
   do {
       chute_computador = inf + rand() % (sup - inf + 1);
       
        printf ("meu chute e de: %d\n",chute_computador);
        printf ("diga-me como estou: ");
        scanf (" %c",&resposta_usuario);
        
        if (resposta_usuario == 'M')sup = chute_computador - 1; 
                
        if (resposta_usuario == 'm')inf = chute_computador + 1; 
            
        if (resposta_usuario == 'A') printf ("Acertei hahaha\n"); 
            
        tentativas++;
     }
   
    while (resposta_usuario != 'A');
           
    printf ("demorei %d tentativas para acertar",tentativas);
        
     return 1;
}
