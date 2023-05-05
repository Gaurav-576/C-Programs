#include<stdio.h>

int oddoreven(int p) {
	if(p%2==0){
		return 0;
	}
	else{
		return 1;
	}
}
int main() {
	int a,x;
	printf("Enter a number: ");
	scanf("%d",&a);
	x=oddoreven(a);
	printf("%d",x);
	if(x==0) {
		printf("Even\n");
	}
	else {
		printf("Odd\n");
	}
	return 0;
}