#include <stdio.h>

int main() {
	char n1,n2,n3,n4,n5;
	int num;
	scanf("%c %c %c %c %c", &n1, &n2, &n3, &n4, &n5);
	scanf("%d", &num);
	if (num == 1)
		printf("%c%c%c%c", n2, n3, n4, n5);
	else if (num == 2)
		printf("%c%c%c%c", n1, n3, n4, n5);
	else if (num == 3)
		printf("%c%c%c%c", n1, n2, n4, n5);
	else if (num == 4)
		printf("%c%c%c%c", n1, n2, n3, n5);
	else if (num == 5)
		printf("%c%c%c%c", n1, n2, n3, n4);
	
	return 0;
}