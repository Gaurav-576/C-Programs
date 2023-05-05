#include<stdio.h>

void input(int* ptr,int n) {  //function to input array elements
    for(int i=0;i<n;i++) {
        printf("Enter element at index %d: ",i);
        scanf("%d",ptr);
        ptr++;
    }
}

void display(int* ptr,int n) {  //function to display elements of an array
    for(int i=0;i<n;i++) {
        printf("\nElement %d: %d",i,*ptr);
        ptr++;
    }
    printf("\n");
}

int main() {
    int size,n,x,temp;

    printf("Enter the size of the array: "); //defining the size of array
    scanf("%d",&size);
    printf("\n");

    int num[size]; // defining array

    // for(int i=0;i<size;i++) {        //  loop input by simple iteration
    //     printf("Enter element %d: ",i);
    //     scanf("%d",&num[i]);
    // }
    // printf("\n");

    // printf("Your array is => \n"); //display array with iteration
    // for(int j=0;j<size;j++) {
    //     printf("%d ",num[j]);
    // }
    // printf("\n");
 
    // int reverse[size];
    // printf("\nYour reversed array is => \n");  // reversing an array
    // for(int j=0;j<size;j++) {
    //     printf("%d ",reverse[j]);
    // } 
    // printf("\n");
    
    // int *a = &num[0]; //initializing pointer
    // for(int i=0;i<size;i++) {        //  loop input by pointer
    //     printf("Enter element %d: ",i);
    //     scanf("%d",a);
    //     a++;
    // }
    // printf("\n");

    // int *ptr=&num[0]; //display array by pointer
    // for(int j=0;j<size;j++) {   
    //     printf("The element at index %d is: %d at address: %d\n",j,*ptr,ptr);
    //     ptr++;
    // }

    
    input(&num[0],size); //function to input data
    display(&num[0],size); // function to display data
    printf("\n");

    int max=num[0]; // maximum and minimum number in an array
    int max_index=0; 
    for(int j=1;j<size;j++) {
        if(num[j]>max) {
            max=num[j];
            max_index=j;
        }
    }
    int min=num[0];
    int min_index=0;
    for(int j=1;j<size;j++) {
        if(num[j]<min) {
            min=num[j];
            min_index=j;
        }
    }
    printf("\nThe largest number in the array is %d at index: %d",max,max_index);
    printf("\nThe smallest number in the array is %d at index: %d\n",min,min_index);

    printf("\nEnter index to access: "); // array traversal
    scanf("%d",&n);
    if(n < size) {
        printf("Your data at index %d is: %d\n",n,num[n]);
    }
    else {
        printf("Enter a valid index number.\n");
    }
    printf("\n");

    int count=0;
    printf("Enter data to be accesssed in the array: "); //searching a certain data in an array
    scanf("%d",&x);
    for(int k=0;k<size;k++) {
        if(x==num[k]) {
            count++;
        }
    }
    if(count==0) {
        printf("The data is not presnt in the array.\n");
    }
    else{
        printf("%d is present %d times in the array.\n",x,count);
    }
    return 0;
}