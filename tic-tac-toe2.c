#include<stdio.h>
#include<stdlib.h>
void board();
void winnercondition();
void winner();
void boardf();
void process();
const char H='H';
char board_array[3][3]={
                        {H,H,H},
                        {H,H,H},
                        {H,H,H}
};
char choiceplayer1,choiceplayer2,choice1;
char option;
int main(){

    printf("\nEnter your choice PLayer 1 o or x: ");
    scanf(" %c",&choice1);
    if (choice1!='o'&&choice1!='x')
    {
        printf("Invalid input\nEnter o or x");
        main();
    }
    
    if (choice1=='x')
    {
        choiceplayer1='x';
        choiceplayer2='o';

    }
    else if (choice1=='o')
    {
        choiceplayer1='o';
        choiceplayer2='x';
    }
    process();
    return 0;
}
void board(){
    printf("|00|01|02|\n|10|11|12|\n|20|21|22|\n");
}
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
    if (c%2==0)
    {
            board();
            printf("Format:(row)SPACE(coloumn)\n");
            printf("Enter slot player 1: ");
            scanf("%d %d", &i,&j);
            board_array[i][j]=choiceplayer1;
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
    if (c%2!=0)
    {
        if (c==9)
        {
            printf("GAME ENDS\n");
        }
        else
        {
            board();
            printf("Format:(row) (coloumn)\n");
            printf("Enter slot player 2: ");
            scanf("%d%d", &i,&j);
            board_array[i][j]=choiceplayer2;
            printf("\n");
            boardf();
            printf("\n");
            c++;
            if(c>=6)
            {winner();}
            process();
        }
    }
}
void winner(){
            if (board_array[0][0]==board_array[0][1]&&board_array[0][1]==board_array[0][2])
            {
                if (board_array[0][0]==choiceplayer1)
                {
                    printf("You win Player 1");
                    main();
                }
                else
                {
                    printf("You win Player 2");
                    main();
                }
            }
            else if (board_array[1][0]==board_array[1][1]&&board_array[1][1]==board_array[1][2])
            {
                if (board_array[1][0]==choiceplayer1)
                {
                    printf("You win Player 1");
                    main();
                }
                else
                {
                    printf("You win Player 2");
                    main();
                }
            }
            else if (board_array[2][0]==board_array[2][1]&&board_array[2][1]==board_array[2][2])
            {
                if (board_array[2][0]==choiceplayer1)
                {
                    printf("You win Player 1");
                    main();
                }
                else
                {
                    printf("You win Player 2");
                    main();
                }
            }
            else if (board_array[0][0]==board_array[1][0]&&board_array[1][0]==board_array[2][0])
            {
                if (board_array[0][0]==choiceplayer1)
                {
                    printf("You win Player 1");
                    main();
                }
                else
                {
                    printf("You win Player 2");
                    main();
                }
            }
            else if (board_array[0][1]==board_array[1][1]&&board_array[1][1]==board_array[2][1])
            {
                if (board_array[0][1]==choiceplayer1)
                {
                    printf("You win Player 1");
                    main();
                }
                else
                {
                    printf("You win Player 2");
                    main();
                }
            }
            else if (board_array[0][2]==board_array[1][2]&&board_array[1][2]==board_array[2][2])
            {
                if (board_array[0][2]==choiceplayer1)
                {
                    printf("You win Player 1");
                    main();
                }
                else
                {
                    printf("You win Player 2");
                    main();
                }
            }
            else if (board_array[0][0]==board_array[1][1]&&board_array[1][1]==board_array[2][2])
            {
                if (board_array[0][0]==choiceplayer1)
                {
                    printf("You win Player 1");
                    main();
                }
                else
                {
                    printf("You win Player 2");
                    main();
                }
            }else if (board_array[0][2]==board_array[1][1]&&board_array[1][1]==board_array[2][0])
            {
                if (board_array[0][2]==choiceplayer1)
                {
                    printf("You win Player 1");
                    main();
                }
                else
                {
                    printf("You win Player 2");
                    main();
                }
            }
}