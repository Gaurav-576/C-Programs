#include<stdio.h>


int convert(char *str) {
    // int num=0;
    // char * dd=input;
    // while (*dd != '\0') {
    //     num = num * 10 + (*dd - 48);
    //     dd++;
    // }
    // printf("%d",num);
     int num=0,i=0;
    while (str[i] != '\0') {
        num = num * 10 + (str[i] - 48);
        i++;
    }
    printf("%d\n",num);
    return num;
}
int bin(int d) {
    int rem,q,b,a;
    a=1;
    b=0;
    q=d;
    while(q!=0) {
        rem=q%2;
        q=q/2;
        b=b+rem*a;
        a=a*10;
    }
    return b;
}
int main() {
    int d,res;
    char str[10];
    printf("Enter your decimal value: ");
    scanf("%s",str);
    int num=0,i=0;
    while (str[i] != '\0') {
        num = num * 10 + (str[i] - 48);
        i++;
    }
    printf("%d\n",num);
    // convert(in);
    res=convert(str);
    printf("%d",res);
    return 0;
}