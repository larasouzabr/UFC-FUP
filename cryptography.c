/* In this cryptography, for each letter of the word "tenis" that are in the sentence, it must be replaced by its corresponding one in the "polar" word. 
All the letters 't' in the sentence must be replaced by the letter 'p', all the letters 'e' in the sentence must be replaced by the letter 'o', 
and so on. The same happens with the letters of the "polar" word that are in the sentence.
All the letters 'p' in the sentence must be replaced by the letter 't', all the letters 'o' in the sentence must be replaced by the letter 'e', and so on.
The other letters, which are not in the words "tenis polar", will not be changed.
*/

#include <stdio.h>
int main (){
    char palavra[100];
    scanf ("%[^\n]", palavra);
    int count=0;
     while (palavra[count] != '\0') count++;
     
    for (int i=0; i <count;i++){
        
        if(palavra[i] == 't')palavra[i] ='p';
        else if(palavra[i] == 'e')palavra[i] ='o';
        else if(palavra[i] == 'n')palavra[i] ='l';
        else if(palavra[i] == 'i')palavra[i] ='a';
        else if(palavra[i] == 's')palavra[i] ='r';
        else if(palavra[i] == 'p')palavra[i] ='t';
        else if(palavra[i] == 'o')palavra[i] ='e';
        else if(palavra[i] == 'l')palavra[i] ='n';
        else if(palavra[i] == 'a')palavra[i] ='i';
        else if(palavra[i] == 'r')palavra[i] ='s';
        
       printf ("%c", palavra[i]);
    }
    
