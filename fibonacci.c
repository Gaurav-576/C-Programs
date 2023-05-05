#include<stdio.h>
#include<math.h>
void fibonacci(int n, int a, int b) {
    int s;
    if(n!=0) {
        s=a+b;
        a=b;
        b=s;
        printf("%d ",s);
        fibonacci(n-1,a,b);
    }
    //if(n==0)
    //   return 0;
   /* if(n==1)
        return 1;
    else    
        return fibonacci(n-1)+fibonacci(n-2);*/
}
int main() {
    int a=0,b=1,s=0,n,j;
    printf("Enter the number of terms in the sequence: ");
    scanf("%d",&n);
    printf("The required fibonacci series is as follows:- \n 0 1 ");
    fibonacci(n-2,a,b);
    return 0;
}

