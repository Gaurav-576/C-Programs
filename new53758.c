#include <stdio.h> // header file for Standard Input Output
#include <stdlib.h> // header file for Standard Library

int main() {
    int n;
    int t,c=0;
    char roman[25];
    printf("Enter number: ");
    scanf("%d",&n);
    if(n>1000) {
        t=n/1000;
        for(int i=0;i<t;i++) {
            roman[c]='M';
            c++;
        }
        n=n%1000;
    }
    if(n>=500){
        if(n>=900) {
            roman[c]='C';
            c++;
            roman[c]='M';
            c++;
            n=n-900;
        }
        else {
            roman[c]='D';
            c++;
            n=n-500;
        }
    }
    if(n>100) {
        if(n>=400) {
            roman[c]='C';
            c++;
            roman[c]='D';
            c++;
            n=n-400;
        }
        else {
            t=n/100;
            for(int i=0;i<t;i++) {
                roman[c]='C';
                c++;
            }
            n=n%100;
        } 
    }
    if(n>=50){
        if(n>=90) {
            roman[c]='X';
            c++;
            roman[c]='C';
            c++;
            n=n-90;
        }
        else {
            roman[c]='L';
            c++;
            n=n-50;
        }
    }
    if(n>10) {
        if(n>=40) {
            roman[c]='X';
            c++;
            roman[c]='L';
            c++;
            n=n-40;
        }
        else {
            t=n/10;
            for(int i=0;i<t;i++) {
                roman[c]='X';
                c++;
            }
            n=n%10;
        } 
    }
    if(n>=5){
        if(n==9) {
            roman[c]='I';
            c++;
            roman[c]='X';
            c++;
            n=n-9;
        }
        else {
            roman[c]='V';
            c++;
            n=n-5;
        }
    }
    if(n>=1) {
        if(n==4) {
            roman[c]='I';
            c++;
            roman[c]='V';
            c++;
            n=n-4;
        }
        else {
            t=n/1;
            for(int i=0;i<t;i++) {
                roman[c]='I';
                c++;
            }
            n=n%1;
        } 
    }
    roman[c]='\0';
    printf("%s",roman);
    return 0;
}