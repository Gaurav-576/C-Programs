#include<stdio.h>
#include<stdlib.h>
#iclude<string.h>

int armstrong(int n) {
    int temp,rem=0,cube=1,sum=0,count=0,bokachoda=n;

    while(bokachoda!=0) {
        bokachoda=bokachoda/10;
        count++;
    }
    // printf("%d\n",count);
    temp=count;
    while(n!=0) {
        rem=n%10;
        temp=count;
        while(temp!=0) {
            cube=cube*rem;
            temp--;
            // printf("%d\n",cube);
        }
        sum=sum+cube;
        cube=1;
        n=n/10;
        // printf("%d\n",sum);
    }
    return sum;
}
int main () {
    int arm,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    arm=armstrong(n);
    if(n==arm) {
        printf("%d is an armstrong number\n",n);
    }
    return 0;
}
