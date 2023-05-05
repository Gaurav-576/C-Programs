#include<stdio.h>

int factors(int n) {
    //printf("%d\n",n);
    if(n!=1) {
        for (int i=2;i<=n/2;i++) {
            if(n%i==0) {
               printf("%d x ",i);
               factors(n/i);
           }
        }
    }
    else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("%d = ",n);
    factors(n);
    return 0;
}