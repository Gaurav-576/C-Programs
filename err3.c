#include<stdio.h>
int sum(int n) {
    int s=0;
    if(n==1) {
        return 1;
    }
    else {
        s=n+sum(n-1);
    }
    return s;
}
int main() {
    int num=1,j;
    printf("Enter the last number: ");
    scanf("%d",&num);
    j=sum(num);
    printf("%d",j);
    return 0;
}

// #include<stdio.h>
 
// int sumOfRange(int);
 
// int main() 
// {
//    int n1;
//    int sum;
// 	printf("\n\n Recursion : calculate the sum of numbers from 1 to n :\n");
// 	printf("-----------------------------------------------------------\n");    
 
//    printf(" Input the last number of the range starting from 1 : ");
//    scanf("%d", &n1);
 
//    sum = sumOfRange(n1); 
//    printf("\n The sum of numbers from 1 to %d : %d\n\n", n1, sum);
 
//    return (0);
// }
 
// int sumOfRange(int n1) 
// {
//    int res;
//    if (n1 == 1) 
//    {
//       return (1);
//    } else 
//    {
//       res = n1 + sumOfRange(n1 - 1); //calling the function sumOfRange itself
//    }
//    return (res);
// }