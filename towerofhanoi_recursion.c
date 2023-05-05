#include<stdio.h>

int towerofhanoi(int n,char a,char b,char c) {
    if (n==1) {
        printf("Move disk %d from %c to %c\n",n,a,c);
        return 0;
    }
    else {
        towerofhanoi(n-1,a,c,b);
        printf("Move disc %d from %c to %c\n",n,a,c);
        towerofhanoi(n-1,b,a,c);
    }
}
int main() {
    int n,j;
    char a='A',b='B',c='C';
    printf("Enter the number of rings: ");
    scanf("%d",&n);
    towerofhanoi(n,a,b,c);
    return 0;
}