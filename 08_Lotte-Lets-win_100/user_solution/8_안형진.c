#include <stdio.h>

int facto(int n) {
	if(n == 1) return 1;
	
	return n * facto(n-1);
}

int tope(int num, int k) {
	int sum = 1;
	while (k != 0) {
		sum *= num--;
		k--;
	}
	
	return sum;
}
int c(int a, int b) {
	int num = a + b;
	int bottom;
	int top;
	int k;
	
	num = 7 - num;
	k = 4 - a;
	
	top = tope(num, k);
	bottom = facto(k);
	
	printf("%d", top/bottom);
}

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	c(a, b);
}