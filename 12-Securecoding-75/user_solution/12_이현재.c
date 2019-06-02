#include <stdio.h>
int main() {

	char arr[100];
	int num;
	int i = 0;

	scanf("%d", &num);

	while(i < 100){
		scanf("%s", &arr[i]);
		if (arr[i] == 'q') {
			break;
		}
		i++;
	}

	if (i > num) {
		printf("You can't write them\n");
	}
	else {
		printf("You can write them\n");
	}
}