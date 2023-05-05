#include<stdio.h>
int main()
{
    int sal=0,t,s,grad;;
    printf("What is your gender ?\n1 for Male\n0 for Female\n");
    scanf("%d",&s);
    printf("What is your qualification ?\n0 for Graduate\n1 for Post-Graduate\n");
    scanf("%d",&grad);
    printf("Enter your years of service: ");
    scanf("%d",&t);
    if(s==1&&grad==1&&t>=10){
        sal=15000;
    }
    else if((s==1&&grad==0&&t>=10)||(s==1&&grad==1&&t<10)){
        sal=10000;
    }
    else if(s==1&&grad==0&&t<10){
        sal=7000;
    }
    else if(s==0&&grad==1&&t>=10){
        sal=12000;
    }
    else if(s==0&&grad==0&&t>=10){
        sal=9000;
    }
    else if(s==0&&grad==1&&t<10){
        sal=10000;
    }
    else if(s==0&&grad==0&&t<10){
        sal=6000;
    }
    printf("Salary is %d",sal);
    return 0;
}