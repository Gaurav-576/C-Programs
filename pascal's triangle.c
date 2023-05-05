#include <stdio.h>

int main() {
	int i,j,x;
	char star;
	x=65;
	star=x;
	for(i=1;i<=10;i++) {
		for(j=10;j>i;j--) {
			printf(" ");
		}
		int C = 1;
        for (int k = 1; k <= i; k++) {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
		printf("\n");
	}
	return 0;
}