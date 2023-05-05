// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=10;i++){
//         for(j=1;j<=25;j++){
//             if((i<3 || i>8) && (j<=10 || j>=15))
//                 printf("G");
//             else if((i==5 || i==6) && ((j>5 && j<=10 ) ||j>=15))
//                 printf("G");
//             else if ((j<3 || j==15 || j==16) && (i<=6))
//                 printf("G");
//             else if ((j<3 || j==24 || j==9 ||j==10 || j==25) && (i>=6))
//                 printf("G");
//             else
//                 printf(" ");
            
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=10;i++){
//         for(j=1;j<=25;j++){
//             if((i<3 || i==5 || i==6) &&((j<=10 || j>=15) && j<25))
//                 printf("G");
//             else if ((j<3 || j==15 || j==16 || j==24 || j==25) && (i<6 && i>1 ))
//                 printf("G");
//             else if ((j==15 || j==9 ||j==10 || j==16) && (i>=6))
//                 printf("G");
//             else if((i==9 || i==10) && (j<11)) 
//                 printf("G");
//             else
//                 printf(" ");
            
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=25;j++){
            if((i<3 || i==5 || i==6) &&((j<=10 || j>=15) && j<25))
                printf("G");
            else if ((j<3 || j==15 || j==16 || j==24 || j==25) && (i<6 && i>1 ))
                printf("G");
            else if ((j==15 || j==9 ||j==10 || j==16) && (i>=6))
                printf("G");
            else if((i==9 || i==10) && (j<11)) 
                printf("G");
            else
                printf(" ");
            
        }
        printf("\n");
    }
}