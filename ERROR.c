#include<stdio.h>
int main()
{
    char m,s;
    int age;
    printf("Are you married ?\nY for Yes\nN for No\n");
    scanf("%c",&m);
    printf("What is your gender ?\nM for Male\nF for Female\n");
    scanf("%c",&s);
    printf("Enter your age: ");
    scanf("%d",&age);
    if(m=='Y'){
        printf("To be insured\n");
    }
    else if(m=='N' && s=='M' && age>30){
        printf("To be insured\n");
    }
    else if(m=='N' && s=='F' && age>25){
        printf("To be insured\n");
    }
    else{
        printf("Not to be insured");
    }
    return 0;
}