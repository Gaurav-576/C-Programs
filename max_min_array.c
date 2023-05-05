#include<stdio.h>

int main() {
    int size,n,x,min_index,max_index;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int num[size];
    
    for(int i=0;i<size;i++) {
        printf("Enter value %d: ",i);
        scanf("%d",&num[i]);
    }
    int max=num[0];  // maximum and minimum number in an array
    for(int j=1;j<size;j++) {
        if(num[j]>max) {
            max=num[j];
            max_index=j;
        }
    }
    int min=num[0];
    for(int j=1;j<size;j++) {
        if(num[j]<min) {
            min=num[j];
            min_index=j;
        }
    }
    printf("Your array is => \n");
    for(int j=0;j<size;j++) {
        printf("%d ",num[j]);
    } 
    printf("\nThe largest number in the array is %d at index: %d",max,max_index);
    printf("\nThe smallest number in the array is %d at index: %d",min,min_index);
    return 0;
}