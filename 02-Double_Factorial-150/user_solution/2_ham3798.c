#include <stdio.h>

int factorial(int n)
{
	if (n <= 1)      
		return 1;    

	return n * factorial(n - 2);  
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", factorial(a));

	return 0;
}
