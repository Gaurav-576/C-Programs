#include<stdio.h>
#include<math.h>

int hcf(int x, int y) {
    int temp;
    if(x>y) {
        temp=x;
    }
    else if (y>x) {
        temp=y;
    }
    else {
        return x;
    }
    if(x==1) {
        return 1;
    }
    else {
        temp=x;
        x=y%x;
        y=temp;
        if(x==0) {
            return temp;
        }
        else {
            hcf(x,y);
        }
    }
}

int lcm(int x,int y,int count) {
    int a=0;
    a=x*count;
    if(a%y==0) {
        return a;
    }
    else {
        count++;
        lcm(x,y,count);
    }
}

int main() {
    int a,b,c,d,count=1;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    c=hcf(a,b);
    printf("The HCF of the numbers is %d\n",c);
    d=lcm(a,b,count);
    printf("The LCM of the numbers is %d\n",d);
    return 0;
}