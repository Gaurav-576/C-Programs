#include <stdio.h>

int main() {
    // Write C code here
    int i,j,p;
    for(i=20;i>-21;i--){
        for(j=-20;j<21;j++){
            p=i*i+j*j;
            if(p<=400 && p>=324 && (i<=0 || j<=0))
                printf("*");
            else if (p<=400 && p>=324 &&(j<15 && i>10))
                printf("*");
            else if(i<1 && i>-2 && j>0 && j<18)
                printf("*");
           else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}