#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,s,temp,sum;
    double area;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    s=sum/2;
    temp=s*(s-a)*(s-b)*(s-c);
    printf("%d\n",temp);
    area=sqrt(temp);
    printf("%f",area);
    return 0;
}