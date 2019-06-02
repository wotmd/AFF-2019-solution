#include <stdio.h>

int input_Factorial_Number();
int calc_Double_Factorial(int factorial_Number);
int main() {
	int factorial_Number = input_Factorial_Number();
	int factorial_Value = calc_Double_Factorial(factorial_Number);
	printf("%d", factorial_Value);

	return 0;
}

int input_Factorial_Number() {
	int number;
	scanf("%d", &number);
	return number;
}

int calc_Double_Factorial(int factorial_Number) {
	int value_Of_Double_Factorial = factorial_Number;
	if (value_Of_Double_Factorial > 1) {
		value_Of_Double_Factorial *= calc_Double_Factorial(value_Of_Double_Factorial - 2);
		return value_Of_Double_Factorial;
	}
	else
		return 1;
}

