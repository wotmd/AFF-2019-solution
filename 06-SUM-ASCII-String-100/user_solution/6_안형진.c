#include <stdio.h>

int main(void) {
	char str[21];
	
	scanf("%[^\n]s", str);
	
	int sum = 10;
	
	for(int i = 0; i < 21; ++i) {
		sum += (int)str[i];
	}
	
	printf("%d", sum);
}