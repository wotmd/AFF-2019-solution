#include <stdio.h>

void run();
void input_String(char* string);
int calc_Sum_ASCII(char* string);

#define MAX_STRING_SIZE 21

int main() {
	run();
}

void run() {
	char string[MAX_STRING_SIZE] = { 0 }; // 문자열
	input_String(string);
	int sum_ASCII_Value = calc_Sum_ASCII(string); // 아스키 코드 합 계산
	printf("%d", sum_ASCII_Value); // 아스키코드 합 출력
}

void input_String(char* string) {
	fgets(string, MAX_STRING_SIZE, stdin);
}

int calc_Sum_ASCII(char* string) {
	int index_Of_String = 0; // 문자열의 인덱스
	int sum_Of_ASCII = 0; // 아스키코드의 합
	
	while (string[index_Of_String] != 0) { // 문자열의 끝에는 NULL이 저장되어있음을 이용
		sum_Of_ASCII += string[index_Of_String];
		++index_Of_String;
	}

	return sum_Of_ASCII;
}
