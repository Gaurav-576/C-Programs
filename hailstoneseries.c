#include<stdio.h>

int hailstone(int n,int count) {
    if(n==1) {
        return count;
    }
    else {
        if(n%2==0) {
            return hailstone(n/2,count+1);
        }
        else {
            return hailstone(n=3*n+1,count+1);
        }
    }
}
int main() {
    int n,j,count=1;
    printf("Enter the number to start: ");
    scanf("%d",&n);
    j=hailstone(n,count);
    printf("The number of terms in the hailstone series is %d",j);
    return 0;
}