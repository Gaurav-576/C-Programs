#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
    int n;
    srand(time(0));
    n=rand();
    printf("%d",n);
    char input,temp[3][8]={"ROCK","SCISSORS","PAPER"};
    char comp[8];
    if(n==0) {
        
    }
    // else if(n==1) {
    //     comp[8]=temp;
    // }
    // else if(n==2) {
    //     temp="Paper";
    // }
    // printf("Choose your option: ");
    // printf("1. Choose 'R' for Rock. \n");
    // printf("2. Choose 'S' for Scissors. \n");
    // printf("3. Choose 'P' for paper. \n");
    // scanf("%c",&input);
    // if((temp[]=='Rock' && input='R') || (temp[]='Scissors' && input=='S') || (temp[]='Paper' && input=='P')) {
    //     printf("It's a draw.\n");
    // } 
    // else if ((temp[]='Rock' && input=='P') || (temp[]='Scissors' && input=='R')(temp[]='Paper' && input=='S')) {
    //     printf("You win.\n The computer chose %s",temp[]);
    // }
    // else {
    //     printf("The Computer wins.\n The computer chose %s. \n Now Computer rule over humans >.<",temp[]);
    // }
    return (0);
}

/*"R-R" R-P R-S*/
/*"S-S" S-R S-P*/
/*"P-P" P-R P-S*/