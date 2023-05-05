#include<stdio.h>

int factorial(int n) {
    int x;
    if(n==1||n==0) {
        return 1;
    }
    else {
        return (n*factorial(n-1));
    }
}
int main() {
    int num,res;
    printf("Enter a number: ");
    scanf("%d",&num);
    res=factorial(num);
    printf("the fuck\n");
    printf("The factorial of %d is %d.",num,res);
    return 0;
}