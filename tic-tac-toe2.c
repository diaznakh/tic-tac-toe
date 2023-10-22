#include<stdio.h>
#include<stdlib.h>
void board(),winnercondition(),winner(),boardf(),process();
const char H='H';
char board_array[3][3]={
                        {H,H,H},
                        {H,H,H},
                        {H,H,H}
};
char choiceplayer1,choiceplayer2,choice1,option;
int main(){
    printf("\nEnter your choice PLayer 1 o or x: ");
    scanf(" %c",&choice1);
    if (choice1!='o'&&choice1!='x')
    {printf("Invalid input\nEnter o or x");
        main();}
    
    if (choice1=='x')
    {choiceplayer1='x';
        choiceplayer2='o';}
    else if (choice1=='o')
    {choiceplayer1='o';
        choiceplayer2='x';}
    process();
    return 0;
}
void board(){
    printf("|0 0|0 1|0 2|\n|1 0|1 1|1 2|\n|2 0|2 1|2 2|\n");}
void boardf(){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("|%c|", board_array[i][j]);
        }
        printf("\n");
    }
}
    int i,j;
    int c=0;
void process(){
            board();
            printf("Format:(row)SPACE(coloumn)\n");
    if (c%2==0)
    {
            printf("Enter slot player 1: ");
            scanf("%d %d", &i,&j);
            board_array[i][j]=choiceplayer1;
    }
    if (c%2!=0)
    {
        if (c==9)
        {
            printf("GAME ENDS NO WINNER\n");
            exit(0);}
        else
        {
            printf("Enter slot player 2: ");
            scanf("%d%d", &i,&j);
            board_array[i][j]=choiceplayer2;
        }
    }
            printf("\n");
            boardf();
            printf("\n");
            c++;
            if(c>=6)
            {
                winner();
            }
            process();
}
void winner(){
    for(int z=0;z<3;z++){
            if ((board_array[z][0]==board_array[z][1]&&board_array[z][1]==board_array[z][2]&&board_array[z][0]==choiceplayer1)||
                (board_array[0][z]==board_array[1][z]&&board_array[1][z]==board_array[2][z]&&board_array[0][z]==choiceplayer1))
            {
               printf("Player 1 Wins!\n");
               exit(0);
            }
            if ((board_array[z][0]==board_array[z][1]&&board_array[z][1]==board_array[z][2]&&board_array[z][0]==choiceplayer2)||
                (board_array[0][z]==board_array[1][z]&&board_array[1][z]==board_array[2][z]&&board_array[0][z]==choiceplayer2))
            {
               printf("Player 2 Wins!\n");
               exit(0);
            }
        }
            if ((board_array[0][0]==board_array[1][1]&&board_array[1][1]==board_array[2][2]&&board_array[0][0]==choiceplayer1)||
                (board_array[0][2]==board_array[1][1]&&board_array[1][1]==board_array[2][0]&&board_array[0][2]==choiceplayer1))
    {
                printf("Player 1 Wins!\n");
                exit(0);
    }
            if ((board_array[0][0]==board_array[1][1]&&board_array[1][1]==board_array[2][2]&&board_array[0][0]==choiceplayer2)||
         (board_array[0][2]==board_array[1][1]&&board_array[1][1]==board_array[2][0]&&board_array[0][2]==choiceplayer2))
    {
                printf("Player 2 Wins!\n");
                exit(0);
    }
}