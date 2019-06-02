#include <stdio.h>
#include <string.h>
int main() {

	char num[5] ;
	int index;

	for(int i = 0 ; i < 5; i++){
		scanf("%c ", &num[i]);
	}
	scanf("%d", &index);

	num[index - 1] = '\0';

	for (int i = 0; i < 5; i++) {
		printf("%c", num[i]);
	}

	return 0;
}