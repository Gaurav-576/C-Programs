#include<stdio.h> 
int main () {
    int n;
    int a=29;
    int* ptr=&a;
    int b=*ptr;
    printf("%d\n",b);
    // printf("%d\n",*b);
    printf("%d\n",&b);
    return 0; 
}