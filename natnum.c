#include <stdio.h>
int main() {
	int n, count, sum = 0;

	printf("enter the value of n(positive integer):\n");
	scanf("%d", &n);

	for(count = 1; count <= n; count++) {
		sum = sum + count;
	}
	
	printf("sum of first %d natural numbers is: %d\n", n, sum);

	return 0;
}
