//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

char arr[3][3] = {
{'1', '2', '3'},
{'4', '5', '6'},
{'7', '8', '9'}};
int iswinning();
void print();

int player = 1, i, userinput;
char playnow;


int main()
{

     do{
        print();
       if(player%2){
           player=1;}
        else{
            player= 2;
     }
        printf("player %d choose a number to play: ", player);
        scanf(" %d", &userinput);
                if (player == 1){
            playnow ='X';
        }
         else{
             playnow = 'O';
         }

        insert();

        i=iswinning();
        player++;
        }
        while(i == -1);
        print();
        if (i == 1)
        printf("PLAYER %d WIN" , --player);
        else
        printf("GAME OVER fOR BOTH");


        //getch();
        return 0;
}



int iswinning()
{

if (arr[0][0] == arr[0][1]  && arr[0][1] == arr[0][2])
return 1;

else if (arr[1][0] == arr[1][1]  && arr[1][1] == arr[1][2])
return 1;

else if (arr[2][0] == arr[2][1]  && arr[2][1] == arr[2][2])
return 1;

else if (arr[0][0] == arr[1][0]  && arr[1][0] == arr[2][0])
return 1;

else if (arr[0][1] == arr[1][1]  && arr[1][1] == arr[2][1])
return 1;

else if (arr[0][2] == arr[1][2]  && arr[1][2] == arr[2][2])
return 1;

else if (arr[0][0] == arr[1][1]  && arr[1][1] == arr[2][2])
return 1;

else if (arr[0][2] == arr[1][1]  && arr[1][1] == arr[2][0])
return 1;

else if (arr[0][0] != '1' && arr[0][1] != '2' && arr[0][2] != '3' && arr[1][0] != '4' && arr[1][1] != '5' && arr[1][2] != '6' && arr[2][0] != '7' && arr[2][1] != '8' && arr[2][2] != '9')
return 0;

else
return -1;
}


void print()
{
system("cls");
printf("\n\n\t TIC TAC TEO\n\n");
printf("Player 1 (X) - Player 2 (O)\n\n\n");

printf("     |     |     \n");
printf("  %c  |  %c  |  %c  \n", arr[0][0] ,arr[0][1], arr[0][2]);
printf("_____|_____|_____\n");
printf("     |     |     \n");
printf("  %c  |  %c  |  %c  \n", arr[1][0] ,arr[1][1], arr[1][2]);
printf("_____|_____|_____\n");
printf("  %c  |  %c  |  %c  \n", arr[2][0] ,arr[2][1], arr[2][2]);
printf("     |     |     \n");
}


int insert()
{
if (userinput == 1 && arr[0][0]== '1')
arr[0][0] = playnow;

else if (userinput == 2 && arr[0][1]== '2')
arr[0][1] = playnow;

else if (userinput == 3 && arr[0][2]== '3')
arr[0][2] = playnow;

else if (userinput == 4 && arr[1][0]== '4')
arr[1][0] = playnow;
else if (userinput == 5 && arr[1][1]== '5')
arr[1][1] = playnow;

else if (userinput == 6 && arr[1][2]== '6')
arr[1][2] = playnow;

else if (userinput == 7 && arr[2][0]== '7')
arr[2][0] = playnow;

else if (userinput == 8 && arr[2][1]== '8')
arr[2][1] = playnow;

else if (userinput == 9 && arr[2][2]== '9')
arr[2][2] = playnow;

else
player--;
//getch();
}

