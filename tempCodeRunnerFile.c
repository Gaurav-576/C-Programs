#include<stdio.h>
#include<string.h>

int main() {
    char str1[] = "Heloo";
    char str2[] = "Helao";
    int val = strcmp(str1,str2);
    printf("%d",val);
    return 0;
}