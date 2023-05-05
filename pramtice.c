#include<stdio.h>

int main() {
    int size,n,x,temp,pos=0,neg=0,odd=0,even=0;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
    int num[10];
    for(int i=0;i<size;i++) {
        printf("Enter value %d: ",i);
        scanf("%d",&num[i]);
    }
    for(int j=0;j<size;j++) {
        if(num[j]>=0) {
            pos++;
        }
        else {
            neg++;
        }
        if(num[j]%2==0) {
            even++;
        }
        else {
            odd++;
        }
    }
    printf("Positive numbers = %d\n",pos);
    printf("Negative numbers = %d\n",neg);
    printf("Odd numbers = %d\n",odd);
    printf("Even numbers = %d\n",even);
    return 0;
}