#include <stdio.h>
#include <string.h>
int main() {
	
	char str[21];
	int sum = 0;

	fgets(str, 21, stdin);
	for (int i = 0; i < strlen(str); i++) {
		sum += (int)str[i];
	}
	printf("%d", sum);

	return 0;
}