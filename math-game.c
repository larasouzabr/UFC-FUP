/*The Professor created the following scoring game that in the end,
the player with the highest points wins. The two players will choose 3 positive numbers each. 
Then they will draw a positive number, called the pivot. The players' score will be obtained as follows, according to the value of the pivot, 
if it is even or odd:
EVEN: The even numbers of the 3 chosen numbers will be a bonus and the odd numbers will be a penalty. 
Then the player's score will be the sum of the even numbers minus the odd numbers.
ODD: The odd numbers of the 3 chosen numbers will be a bonus and the even numbers will be a penalty. 
Then the player's score will be the sum of the odd numbers subtracted from the even numbers.
Implement a program that receives the 3 numbers chosen by each player and the value of the pivot.
It prints who won and their score and in case of a tie, prints Tie. */

#include <stdio.h>
int main (){
    int jog1_1, jog1_2,jog1_3,jog2_1,jog2_2,jog2_3,pivo;
       scanf ("%d %d %d", &jog1_1,&jog1_2, &jog1_3);
       scanf ("%d %d %d", &jog2_1,&jog2_2,&jog2_3);
       scanf ("%d", &pivo);
      int pont1, pont2; 
      
      if (pivo%2 == 0){
          if (jog1_1%2 != 0) jog1_1 =jog1_1 *(-1);
          if (jog1_2%2 != 0) jog1_2 =jog1_2 *(-1);
          if (jog1_3%2 != 0)jog1_3 =jog1_3 *(-1);
          if (jog2_1%2 != 0)jog2_1 =jog2_1 *(-1);
          if (jog2_2%2 != 0)jog2_2 =jog2_2 *(-1);
          if (jog2_3%2 != 0)jog2_3 =jog2_3 *(-1);
         
      } 
       if (pivo%2 !=0){
        if (jog1_1%2 == 0)jog1_1 =jog1_1 *(-1);
        if (jog1_2%2 == 0)jog1_2 =jog1_2 *(-1);
        if (jog1_3%2 == 0)jog1_3 =jog1_3 *(-1);
        if (jog2_1%2 == 0)jog2_1 =jog2_1 *(-1);
        if (jog2_2%2 == 0)jog2_2 =jog2_2 *(-1);
        if (jog2_3%2 == 0)jog2_3 =jog2_3 *(-1);
       }
       pont1 = jog1_1 + jog1_2 + jog1_3;
       pont2 = jog2_1 + jog2_2 +jog2_3;
       
       if (pont1 > pont2) printf ("Jogador1 %d", pont1);
       else if (pont2 > pont1) printf ("Jogador2 %d", pont2);
       else printf ("Empate");
    return 1;
}
