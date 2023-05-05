#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,count=0;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        char *ptr=str;
        while(*ptr!='\0') {
            if((*ptr=='a') || (*ptr=='e') || (*ptr=='i') || (*ptr=='o') || (*ptr=='u')) {
                break;
            }
            count++;
            ptr++;
        }
        if(count>4) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
	return 0;
}

