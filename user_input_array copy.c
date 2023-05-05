#include<stdio.h>

int main() {
    int size,n,x,temp;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int num[size];
    
    for(int i=0;i<size;i++) {
        printf("Enter value %d: ",i);
        scanf("%d",&num[i]);
    }
    printf("Your array is => \n");
    for(int j=0;j<size;j++) {
        printf("%d ",num[j]);
    } 
    printf("\nEnter index to access: ");
    scanf("%d",&n);
    if(n < size) {
        printf("Your data at index %d is: %d\n",n,num[n]);
    }
    else {
        printf("Enter a valid index number.\n");
    }
    printf("Enter data to be accesssed in the array: ");
    scanf("%d",&x);
    for(int k=0;k<size;k++) {
        if(x==num[k]) {
            printf("The data %d is present at index: %d",x,k);
            goto end;
        }
        else {
            continue;
        }
    }
    printf("The data is not presnt in the array.\n");
    end:
    return 0;
}