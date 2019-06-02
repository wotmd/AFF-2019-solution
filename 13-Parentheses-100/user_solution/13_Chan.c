#include <stdio.h>
#include <stdlib.h>

void main() {
	char* line = (char*)(malloc(sizeof(char)*100));
	int count = 0;
	fgets(line, 100, stdin);
	for (int i=0; *(line+i)!='\0'; i++) {
		if(*(line+i) == '(') 
			count++;
		if(*(line+i) == ')')
			count--;
		if(count < 0) {
			printf("Wrong Syntax!\n");
			return;
		}
	}
	if(count != 0) {
		printf("Wrong Syntax!\n");
	}
	else {
		printf("Correct Syntax!\n");
	}
}
