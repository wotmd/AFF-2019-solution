#include <stdio.h>

unsigned long long fibo(int n) {
	unsigned long long a[100];
	
	a[0] = 0;
	a[1] = 1;
	
	for (int i = 2; i <= 99; i++) {
		a[i] = a[i - 2] + a[i - 1];
	}
	
	return a[n];
}

int park(unsigned long long num) {
	int sum = 0;
	
	while(num != 0) {
		sum += (num % 10);
		num = num/10;
	}
	
	return sum;
}

int main(void) {
	int n;
	unsigned long long num;
	
	scanf("%d", &n);
	num = fibo(n);
	printf("%d", park(num));
}