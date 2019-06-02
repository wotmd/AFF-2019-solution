#include <stdio.h>

int thtn(int n) {
	int result = 0;
	for(int i = 2; i < n; i++) {
		if(n % i == 0) result = 1;
	}
	return result;
}



int main(void) {
	int m, n;
	scanf("%d %d", &m, &n);
	int gcd=0;
	for(int i=1;i<=m;i++) {
		if(m%i==0 && n%i==0)
			gcd=i;
	}
	if(gcd == 1) {
		printf("0");
	}else {
		if(thtn(gcd)) {
			printf("0");
		}else {
			printf("%d", gcd);
		}
	}
}