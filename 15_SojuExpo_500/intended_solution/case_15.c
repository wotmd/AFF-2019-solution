#include <stdio.h>

#define max(x,y) (x>y ? x:y)

int main() {
	int n, i, j;
	scanf("%d", &n);
	int val[10001]={0,};
	int dp[10001]={0,};
	for(i=0; i<n; i++) {
		scanf("%d", &val[i]);
	}
	dp[0] = val[0];
	dp[1] = dp[0] + val[1];

	for(i=3; i<=n; i++) {
		dp[i] = max(dp[i-2] + val[i], dp[i-3]+val[i-1]+val[i]);
		dp[i] = max(dp[i-1], dp[i]);
	}
	printf("%d", dp[n]);
}


