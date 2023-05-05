#include "armstrong_numbers.h"
#include<stdio.h>

bool is_armstrong_number(int n) {
    int temp,rem=0,cube=1,sum=0,count=0,bokachoda=n;

    while(bokachoda!=0) {
        bokachoda=bokachoda/10;
        count++;
    }
    temp=count;
    while(n!=0) {
        rem=n%10;
        temp=count;
        while(temp!=0) {
            cube=cube*rem;
            temp--;
        }
        sum=sum+cube;
        cube=1;
        n=n/10;
    }
    if(n==sum) {
        return true;
    }
    else {
        return false;
    }
}