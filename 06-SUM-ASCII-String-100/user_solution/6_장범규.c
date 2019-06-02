#include <stdio.h>

int main() {
	char str[30];
	int sum = 0;
	scanf("%[^\n]s", str);
	for (int i = 0; i < 30; i++) {
		if (str[i] == '\0')
			break;
		else
			sum += str[i];
	}
	printf("%d", sum+10);
	return 0;
}