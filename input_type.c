#include<stdio.h>
int main()
{
    char x;
    int ascii;
    printf("Enter: ");
    scanf("%c",&x);
    ascii=x;
    if(ascii>=65 && ascii<=90){
        printf("You entered uppercase letters.");
    }
    else if(ascii>=97 && ascii<=122){
        printf("You entered lowercase letters.");
    }
    else if(ascii>=48 && ascii<=57){
        printf("You entered a number.");
    }
    else{
        printf("You entered a special character.");
    }
    return 0;
}