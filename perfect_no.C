#include<stdio.h>

int printperfect(int n) {
    int a=n,flag=0,sum=0;
    for(int i=1;i<a;i++) {
        if(a%i==0) {
            sum=sum+i;
        }
    }
    if(a==sum) {
        flag=1;
    }
    return flag;
}
int main() {
    int n,res;
    printf("Enter a number: ");
    scanf("%d",&n);
    res=printperfect(n);
    //printf("%d\n",res);
    if(res==1){
        printf("%d is a perfect number",n);
    }
    else {
        printf("%d is not a perfect number",n);
    }
    return 0;
}