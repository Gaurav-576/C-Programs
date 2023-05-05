#include<stdio.h>

int main() {
    int size,n,x,count=1;
    int sum=0,index;
    printf("Enter the size of the array: "); 
    scanf("%d",&size);
    printf("\n");
    int num[size]; 
    int res[size];
    for(int i=0;i<size;i++) {    
        printf("Enter element %d: ",i);
        scanf("%d",&num[i]);
    }
    for(int j=0;j<size;j++) {
        for(int k=0;k<size;k++) {
            if(j==k) {
                break;
            }
            else if(num[j]==num[k]) {
                count++;
            }
        }
        res[j]=count;
        count=1;
    }
    int temp=num[0];
    for(int c=1;c<size;c++) {
        if(temp<res[c]) {
            temp=res[c];
            index=c;
        }
    }
    printf("\nThe maximum number of repetitions is %d for %d times ",num[index],temp);
    return 0;
}
