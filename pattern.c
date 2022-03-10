#include<stdio.h>
int main() {
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++) {
		int j, k;
		for(j=0; j<n-i; j++) {
			printf("  ");
		}
		for(k=0; k<(2*i)-1; k++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=1; i<=n; i++) {
		int j, k;
		for(j=0; j<i; j++) {
			printf("  ");
		}
		for(k=0; k<(2*(n-i))-1; k++){
			printf("* ");
		}
		printf("\n");
	}
}
