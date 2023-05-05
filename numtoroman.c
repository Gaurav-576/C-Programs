#include<stdio.h>

int roman(int n) {
    int temp;
    if(n>=1000) {
        temp=n/1000;
        for(int i=0;i<temp;i++) {
            printf("M");
        }
        n=n%1000;
    }   
    if(n>=500) {
        if(n>=900){
            printf("CM");
            n=n-900;
            goto next;
        }
        printf("D");
        n=n%500;
    }
    next:
    if(n>=100) {
        temp=n/100;
        if(temp<4) {
            for(int i=0;i<temp;i++) {
                printf("C");
            }
        }
        if(temp==4) {
            printf("CD");
        }
        n=n%100;
    }
    if(n>=50) {
        if(n>=90){
            printf("XC");
            n=n-90;
            goto con;
        }
        printf("L");
        n=n%50;
    }
    con:
    if(n>=10) {
        temp=n/10;
        if(temp<4) {
            for(int i=0;i<temp;i++) {
                printf("X");
            }
        }
        if(temp==4) {
            printf("XL");
        }
        n=n%10;
    }
    if(n>=5) {
        if(n>=9){
            printf("IX");
            n=n-9;
            goto last;
        }
        printf("V");
        n=n%500;
    }
    last:
    if(n>=1) {
        if(n<4) {
            for(int i=0;i<n;i++) {
                printf("I");
            }
        }
        if(n==4) {
            printf("IV");
        }
        n=n%1;
    }
    else {
        return 0;
    }
}
int main() {
    int num;
    printf("Enter value in numerals(Below 4000): ");
    scanf("%d",&num);
    roman(num);
    return 0;
}