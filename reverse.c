#include<stdio.h>
int main()
{
    int i,n,temp,rev=0;
    printf("Enter a five-digit number: ");
    scanf("%d",&n);
    for(i=0;i<5;i++){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    printf("The reversed number is %d\n",rev);
    if(rev==n){
        printf("They are equal.");
    }
    else{
        printf("They are not equal.");
    }
    return 0;
}