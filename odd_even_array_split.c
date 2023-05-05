#include<stdio.h>

int main() {
    int size,n,x,count=1,temp,a=0,b=0;
    int sum=0,index;
    printf("Enter the size of the array: "); 
    scanf("%d",&size);
    printf("\n");
    int num[size];
    int odd[size];
    int even[size];
    for(int i=0;i<size;i++) {    
        printf("Enter element %d: ",i);
        scanf("%d",&num[i]);
    }
    for(int j=0;j<size;j++) {
        if(num[j]%2==0) {
            even[a]=num[j];
            a++;
        }
        else {
            odd[b]=num[j];
            b++;
        }
    }
    printf("Main array : \n");
    for(int k=0;k<size;k++) {
        printf("%d ",num[k]);
    }
    printf("\n");
    printf("Even elements array : \n");
    for(int k=0;k<a;k++) {
        printf("%d ",even[k]);
    }
    printf("\n");
    printf("Odd elements array : \n");
    for(int k=0;k<b;k++) {
        printf("%d ",odd[k]);
    }
    return 0;
}

// 4 5 7 6 8 1 2 