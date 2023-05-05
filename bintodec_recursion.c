#include<stdio.h>
#include<math.h>

int bintodec(int b,int sum,int power) {
    int rem,temp;
    if(b!=0) {
        rem=b%10;
        temp=rem*pow(2,power);
        sum=sum+temp;
        power++;
        b=b/10;
        bintodec(b,sum,power);
    }
    else {
        return sum;
    }
}
int main() {
    int b,dec;
    int rem,sum=0,power=0,temp;
    printf("Enter your binary string: ");
    scanf("%d",&b);
    sum=bintodec(b,sum,power);
    printf("%d",sum);
    return 0;
}