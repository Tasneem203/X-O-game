//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

char arr[9] = {'1','2','3','4','5','6','7','8','9'};
int iswinning();
void print();



int main()
{
    int player = 1, i, userinput;
    char playnow;

     do{
        print();

       if(player%2) != 0{
           player=1;}
        else{
            player= 2;
     }
        printf("player %d choose a number to play: ", player);
        scanf(" %d", &userinput);
         
        if (player == 1) != 0{
            player ='X';
        }
         else{
             player='O'
         }

        if (userinput == 1 && arr[0]== '1')
        arr[0] = playnow;

        else if (userinput == 2 && arr[1]== '2')
        arr[1] = playnow;

        else if (userinput == 3 && arr[2]== '3')
        arr[2] = playnow;

        else if (userinput == 4 && arr[3]== '4')
        arr[3] = playnow;

        else if (userinput == 5 && arr[4]== '5')
        arr[4] = playnow;

        else if (userinput == 6 && arr[5]== '6')
        arr[5] = playnow;

        else if (userinput == 7 && arr[6]== '7')
        arr[6] = playnow;

        else if (userinput == 8 && arr[7]== '8')
        arr[7] = playnow;

        else if (userinput == 9 && arr[8]== '9')
        arr[8] = playnow;

        else {
        player--;
        //getch();
        }

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
if (arr[0] == arr[1] && arr[1] == arr [2])
return 1;

else if (arr[3] == arr[4] && arr[4] == arr [5])
return 1;

else if (arr[6] == arr[7] && arr[7] == arr [8])
return 1;

else if (arr[0] == arr[3] && arr[3] == arr [6])
return 1;

else if (arr[1] == arr[4] && arr[4] == arr [7])
return 1;

else if (arr[2] == arr[5] && arr[5] == arr [8])
return 1;

else if (arr[0] == arr[4] && arr[4] == arr [8])
return 1;

else if (arr[2] == arr[4] && arr[4] == arr [6])
return 1;

else if (arr [0] != '1' && arr [1] != '2' && arr [2] != '3' && arr [3] != '4' && arr [4] != '5' && arr [5] != '6' && arr [6] != '7' && arr [7] != '8' && arr [8] != '9')
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
printf("  %c  |  %c  |  %c  \n", arr[0],arr[1], arr[2]);
printf("_____|_____|_____\n");
printf("     |     |     \n");
printf("  %c  |  %c  |  %c  \n", arr[3], arr[4], arr[5]);
printf("_____|_____|_____\n");
printf("  %c  |  %c  |  %c  \n", arr[6],arr[7],arr[8]);
printf("     |     |     \n");

}
