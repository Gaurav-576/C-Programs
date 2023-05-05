#include<stdio.h>

int main() {
    int n;
    float input,output,temp;
    
    while(n!=0) {
        printf("\nChoose convertion type :- \n");
        printf("1. Kilometres to Miles.\n");
        printf("2. Inches to Feet.\n");
        printf("3. Centimetres to Inches.\n");
        printf("4. Kilograms to pounds.\n");
        printf("5. Inches to Metres.\n");
        printf("Enter 0 to exit\n\n");
        printf("Enter choice: ");
        scanf("%d",&n);
        switch(n) {
            case 1: printf("Enter number of Kilometres: ");
                    scanf("%f",&input);
                    output=0.621371*input;
                    printf("%f km = %f mi\n",input,output);
                    break;
            case 2: printf("Enter number of Inches: ");
                    scanf("%f",&input);
                    output=0.0833333*input;
                    printf("%f in = %f ft\n",input,output,temp);
                    break;
            case 3: printf("Enter number of Centimetres: ");
                    scanf("%f",&input);
                    output=0.393701*input;
                    printf("%f cm = %f in\n",input,output);
                    break;
            case 4: printf("Enter number of Kilograms: ");
                    scanf("%f",&input);
                    output=2.20462*input;
                    printf("%f kg = %f lb\n",input,output);
                    break;
            case 5: printf("Enter number of Inches: ");
                    scanf("%f",&input);
                    output=0.621371*input;
                    printf("%f in = %f mt\n",input,output);           
                    break;
            default: printf("Enter a valid choice !!\n");
        }
    }
    return 0;
}