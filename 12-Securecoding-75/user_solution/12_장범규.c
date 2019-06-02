#include <stdio.h>

int main() {
	int num, i;
	char in;
	scanf("%d", &num);
	for (i = 0;; ++i) {
		scanf("%c", &in);
		if (in == 'q')
			break;
	}
	if (i > num)
		printf("You can't write them");
	else
		printf("You can write them");

	return 0;
}