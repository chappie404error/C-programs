#include<stdio.h>
#include<stdlib.h>

int main(){

    char a[10] ={ '.','.','.','.','.','.','.','.','.','.',};

    char input;
    int position,turns=0;

    printf("|%c|%c|%c|\n|%c|%c|%c|\n|%c|%c|%c|%c|\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);

    while(turns<9)
    {

    fflush(stdin);
    printf("enter the choice x or o :");
    scanf("%c",&input);

    printf("enter position: ");
    scanf("%d",&position);

    a[position] = input;

    printf("|%c|%c|%c|\n|%c|%c|%c|\n|%c|%c|%c|%c|\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);

    turns++;

    if(a[1]==a[2]&&a[2]==a[3] && (a[3]=='x' || a[3]=='o'))
    {
        printf("\n GAME OVER \t %c WINS\n",a[3]);
    }
    else if(a[4]==a[5]&&a[5]==a[6] && (a[6]=='x' || a[6]=='o'))
    {
        printf("\n GAME OVER \t %c WINS\n",a[6]);
    }
    else if(a[7]==a[8]&&a[8]==a[9] && (a[9]=='x' || a[9]=='o'))
    {
        printf("\n GAME OVER \t %c WINS\n",a[9]);
    }   
    else if(a[1]==a[4]&&a[4]==a[7] && (a[7]=='x' || a[7]=='o'))
    {
        printf("\n GAME OVER \t %c WINS\n",a[7]);
    }   
    else if(a[2]==a[5]&&a[5]==a[8] && (a[8]=='x' || a[8]=='o'))
    {
        printf("\n GAME OVER \t %c WINS\n",a[8]);
    }   
    else if(a[3]==a[6]&&a[6]==a[9] && (a[9]=='x' || a[9]=='o'))
    {
        printf("\n GAME OVER \t %c WINS\n",a[9]);
    }
    else if(a[1]==a[5]&&a[5]==a[9] && (a[9]=='x' || a[9]=='o'))
    {
        printf("\n GAME OVER \t %c WINS\n",a[9]);
    }
    else if(a[3]==a[5]&&a[5]==a[7] && (a[7]=='x' || a[7]=='o'))
    {
        printf("\n GAME OVER \t %c WINS\n",a[7]);
    }

    }
    printf("\n DRAW \n");
    return 0;

}
