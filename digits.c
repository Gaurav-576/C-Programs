#include<stdio.h>

int digits(int n, int c) {
    if(n!=0) {
        n=n/10;
        c++;
        digits(n,c);
    }
    else 
        return c;
}
int sod (int num,int s) {
    int rem;
    if(num!=0) {
        rem=num%10;
        num=num/10;
        s=s+rem;
        sod(num,s);
    }
    else {
        return s;
    }
}
int main() {
    int num,ans,count=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The number of digits in %d is %d\n",num,digits(num,count));
    printf("The sum of digits in %d is %d\n",num,sod(num,sum));
    return 0;
}