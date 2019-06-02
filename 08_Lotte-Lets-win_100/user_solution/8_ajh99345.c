#include <stdio.h>

int factorial2(int n){
	if (n == 0) return 1;
	else if (n == 1) return 1; 
	else return n * factorial2(n - 1); 
}

int main(){
	int num1, num2, num3, num4, answer;
	
	scanf("%d %d", &num1, &num2);
	
	num3 = 7-(num1+num2);
	num4 = 4-num1;
	num1 = num3 - num4;	
	num3 = factorial2(num3);
	num4 = factorial2(num4);
	num1 = factorial2(num1);
	answer = num3/(num4*num1);				
	printf("%d",answer);
}