/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 * @input C : Integer
 * 
 * @Output Integer
 */
#include<stdio.h>

int solve(int* A, int n1, int* B, int n2, int C) {
    int i,j,p,q;
    for(i=0;i<n1;i++) {
        scanf("%d",&A[i]);
    }
    for(j=0;j<n2;j++) {
        scanf("%d",&B[j]);
    }
    scanf("%d",&C);
    int x=0,y=0;
    for(p=0;p<n1;p++) {
        if(A[p]>C) {
            x++;
            printf("%d",x);
        }
    }
    for(q=0;q<n2;q++) {
        if(B[q]>C) {
            y++;
        }
    }
    if(x>y) {
        return x;
    }
    else {
        return y;
    }
}
int main () {
    int *A, *B,C,n1,n2,res;
    scanf("%d",&n1);
    scanf("%d",&n2);
    res=solve(A,n1,B,n2,C);
    printf("%d",res);
    return 0;
}
/*
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * @input C : Integer
 * 
 * @Output Integer
 /*
int solve(int* A, int n1, int B, int C) {
    scanf("%d",&n1);
    int i=0;
    for(i=0;i<n1;i++) {
        scanf("%d",&A[i]);
    }
    scanf("%d",&B);
    scanf("%d",&C);
    int j=0,count=0;
    for(j=0;j<n1;j++) {
        if((B%2)!=(A[j]%2)) {
            count++;
        }
    }
    return count*C;
}
*/