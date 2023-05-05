#include<stdio.h>

int main() {
    int n,x,y;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d",&x);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d",&y);
    int matrix[x][y];
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
            printf("Enterthe a%d%d element of the matrix: ",(i+1),(j+1));
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}