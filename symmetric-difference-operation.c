/*
program that receives two sets of integers and performs the symmetric difference operation. 
The symmetric difference is the elements contained in the first set but not in the second and elements contained in the second but not in the first. 
*/

#include <stdio.h>
int main(){
    int n1,n2;
    scanf ("%d",&n1);
    
    int vetor1[n1];
    
    for (int j=0;j<n1;j++)scanf ("%d",&vetor1[j]);
    
    scanf ("%d",&n2);
    int vetor2[n2];
    
    for (int i=0;i<n2;i++) scanf ("%d",&vetor2[i]);
    
    int vetor_dif[n2+n1],tam_dif=0; 
    
     for(int i = 0; i < n1; i++){
          int pertence=0;
           for(int j = 0; j < n2; j++){  
                if(vetor1[i] == vetor2[j]){
                    pertence=1;
                    break;
                }
            }
            if (!pertence) {
                vetor_dif[tam_dif] = vetor1[i];
                tam_dif++;
            }   
        }
        
     for(int j = 0; j < n2; j++){
        int contido = 0;
        for(int i = 0; i < n1; i++){
            if(vetor2[j] == vetor1[i]){
                contido = 1;
                break;
            }
        }
        if(!contido){
          vetor_dif[tam_dif] = vetor2[j];
            tam_dif++;
        }
    }    
        
    for (int i=0; i<tam_dif;i++) printf ("%d ", vetor_dif[i]);
    return 1;
}
