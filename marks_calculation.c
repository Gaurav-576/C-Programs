#include<stdio.h>
int main()
{
    int eng,hin,math,sci,sst;
    float per;
    printf("Enter your marks in English: ");
    scanf("%d",&eng);
    printf("Enter your marks in Hindi: ");
    scanf("%d",&hin);
    printf("Enter your marks in Maths: ");
    scanf("%d",&math);
    printf("Enter your marks in Science: ");
    scanf("%d",&sci);
    printf("Enter your marks in Social Studies: ");
    scanf("%d",&sst);
    per=((float)(eng+hin+math+sci+sst)/5);
    if(per>=60){
        printf("First division\n");
    }
    else if((per>=50)&&(per<60)){
        printf("Second division\n");
    }
    else if((per>=40)&&(per<50)){
        printf("Third division\n");
    }
    else if(per<40){
        printf("Fail\n");
    }
    return 0;
}