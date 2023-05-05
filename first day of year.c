#include<stdio.h>
int main()
{
    int a,b,n,x=1900,tot,day;
    printf("Enter year: ");
    scanf("%d",&n);
    n=(n-1)-x;
    a=n/4;
    b=n-a;
    tot=(a*366)+(b*365)+1;
    day=tot%7;
    switch(day){
        case 0:
            printf("Monday\n");
            break;
        case 1:
            printf("Tuesday\n");
            break;
        case 2:
            printf("Wednesday\n");
            break;
        case 3:
            printf("Thursday\n");
            break;
        case 4:
            printf("Friday\n");
            break;
        case 5:
            printf("Saturday\n");
            break;
        default:
            printf("Sunday\n");
    }
    return 0;
}