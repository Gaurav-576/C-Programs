#include<stdio.h>

int prime(int x) {
	int flag=0;
	for(int i=2;i<x;i++) {
		if(x%i==0) {
			flag=1;
			break;
		}
	}
	if(flag==0) {
		return 1;
	}
	else {
		return 0;
	}
}

void printprimes(int a) {
	int q,p=1;
	while(p<=a) {
		q=prime(p); //calling function multiple times in a while loop(recursion)
		if(q==1) {
			printf("%d\n",p);
		}
		p++;
	}
}

int main() {
	int a,b;
	printf("Enter a number: ");
	scanf("%d",&a);
	printprimes(a);
	return 0;
}