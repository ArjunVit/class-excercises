#include<stdio.h>
void modulo(int, int);
void main() {
	int dividend, divisor;
	printf("Enter number: ");
	scanf("%d", &dividend);
	printf("Enter modulo number: ");
	scanf("%d", &divisor);
	modulo(dividend, divisor);
	return 0;
}

void modulo(int a, int b) {
	float mod;
	mod = a % b;
	if((int)mod == 0) {
		printf("Prefect modulo");
	} else {
		printf("Not perfect modulo");
	}
}
