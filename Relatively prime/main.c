#include<stdio.h>
int main() {
	int a, b, count=0, i;
	printf("Enter two numbers to check for relatiely prime: ");
	scanf("%d %d", &a, &b);
	for(i=2; i<=a; i++) {
		if(a%i==0 && b%i==0) {
			count=1;
			break;
		}
	}
	if(count==1) {
		printf("Not relatively prime");
	} else {
		printf("Relatively prime");
	}
}
