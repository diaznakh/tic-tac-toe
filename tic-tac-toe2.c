#include<stdio.h>
#include<stdlib.h>
void board();
void boardf();
void process();
const char H='H';
char board_array[3][3]={
                        {H,H,H},
                        {H,H,H},
                        {H,H,H}
};
char option;
int main(){
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
            printf("Choose o or x: ");
            scanf(" %c",&option);
            board_array[i][j]=option;
            printf("\n");
            boardf();
            printf("\n");
            c++;
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
            scanf("%d %d", &i,&j);
            printf("Choose o or x: ");
            scanf(" %c",&option);
            board_array[i][j]=option;
            printf("\n");
            boardf();
            printf("\n");
            c++;
            process();
        }
    }
    
}